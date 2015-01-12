from __future__ import print_function
import sys
import os
import os.path
import shutil
import time
import functools
import glreg


_PYTHON3 = sys.version_info >= (3, 0)


if _PYTHON3:
    from urllib.request import urlopen
else:
    from urllib2 import urlopen


try:
    import locale
    locale.setlocale(locale.LC_ALL, '')
except:
    pass


class Printer(object):
    def __init__(self, f):
        self.f = f
        self.indent = 0

    def __call__(self, *args, **kwargs):
        if 'indent' in kwargs:
            indent = kwargs['indent']
            del kwargs['indent']
            print(' ' * 4 * indent, file=self.f, end='')
        else:
            print(' ' * 4 * self.indent, file=self.f, end='')
        print(*args, file=self.f, **kwargs)


""" registry """


class url_uptodate(object):
    def __init__(self, url):
        self.url = url

    def __call__(self, task, values):
        dest = task.targets[0]
        # Get last modified info of dest and src
        try:
            dest_mtime = os.stat(dest).st_mtime
            r = urlopen(self.url)
        except:
            return False
        src_mtime = time.mktime(time.strptime(r.info().getheader('Last-Modified'),
            '%a, %d %b %Y %H:%M:%S %Z'))
        return dest_mtime >= src_mtime


def wget(url, dest):
    dest_dir = os.path.dirname(dest)
    if dest_dir and not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    f = open(dest, 'wb')
    r = urlopen(url)
    shutil.copyfileobj(r, f)
    f.close()


def task_gl_registry():
    src = 'https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml'
    dest = 'gl.xml'
    return {
        'basename': dest,
        'actions': [(wget, [src, dest])],
        'targets': [dest],
        'uptodate': [url_uptodate(src)],
    }


""" khrplatform.h """


#def task_khr_platform_header():
#    src = 'http://www.khronos.org/registry/egl/api/KHR/khrplatform.h'
#    dest = 'include/KHR/khrplatform.h'
#    return {
#        'basename': 'include/KHR/khrplatform.h',
#        'actions': [(wget, [src, dest])],
#        'targets': [dest],
#        'uptodate': [url_uptodate(src)],
#    }


def load_reg(reg):
    f = open(reg, 'r')
    reg = glreg.load(f)
    f.close()
    apis = glreg.group_apis(reg, api='gles2', support='gles2')
    return reg, apis


def const_name(x):
    return '_{0}'.format(x)


def cmd_name(x):
    assert x.startswith('gl')
    return x[2].lower() + x[3:]


""" src/gl.h """

def gen_gl(registry, dest):
    reg, apis = load_reg(registry)
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_GL_H_')
    out('#define _PYCGLES2_GL_H_')
    out('')
    out('')
    for api in apis:
        out('#ifndef', api.name)
        out('#define', api.name)
        for t in api.types.values():
            out(t.template.format(apientry='KHRONOS_APIENTRY', name=t.name))
        for e in api.enums.values():
            out(e.text)
        for c in api.commands.values():
            name = '(KHRONOS_APIENTRY *PFN{0}PROC)'.format(c.name.upper())
            params = ', '.join(x.text for x in c.params)
            out('typedef ', c.proto_template.format(type=c.type, name=name),
                ' (', params, ');', sep='')
        out('#endif /*', api.name, '*/')
        out('')
        out('')
    out('#endif')


def task_gl():
    return {
        'basename': 'src/gl.h',
        'actions': [(gen_gl, ['gl.xml', 'src/gl.h'])],
        'targets': ['src/gl.h'],
        'file_dep': ['dodo.py', 'gl.xml'],
    }


""" src/ctxstruct.h """


def gen_ctxstruct(registry, dest):
    reg, apis = load_reg(registry)
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_CTXSTRUCT_H_')
    out('#define _PYCGLES2_CTXSTRUCT_H_')
    out('#include <Python.h>')
    out('#include <pycgles2.h>')
    out('#include "gl.h"')
    out('')
    out('')
    out('typedef struct PyCGLES2_Context {')
    out.indent += 1
    out('PyObject_HEAD')
    out('PyObject *in_weakreflist;')
    out('PyObject *make_current;')
    out('PyObject *get_proc_address;')
    out.indent -= 1
    for api in apis:
        out('#ifdef', api.name)
        out.indent += 1
        out('char ' + const_name(api.name) + ';')
        for v in api.commands.values():
            pfn_name = 'PFN{0}PROC'.format(v.name.upper())
            name = cmd_name(v.name)
            out(pfn_name, ' ', name, ';', sep='')
        out.indent -= 1
        out('#endif /*', api.name, '*/')
    out('} PyCGLES2_Context;')
    out('#endif /* _PYCGLES2_CTXSTRUCT_H_ */')


def task_ctxstruct():
    return {
        'basename': 'src/ctxstruct.h',
        'actions': [(gen_ctxstruct, ['gl.xml', 'src/ctxstruct.h'])],
        'targets': ['src/ctxstruct.h'],
        'file_dep': ['dodo.py', 'gl.xml'],
    }


""" src/ctxinit.h """


def _gen_init_api(out, api):
    out('#ifdef', api.name, indent=0)
    # Begin conditional
    if api.features:
        # API is a feature
        ft = api.features[api.name]
        major, minor = ft.number
        out('if (major >', major, '|| (major ==', major, '&& minor >=', minor, ')) {')
    elif api.extensions:
        # API is an extension
        ext = api.extensions[api.name]
        out('if (hasExtension(s, "', api.name, '")) {', sep='')
    else:
        raise ValueError, 'wat'
    out.indent += 1
    # Set feature bit
    out('self->', const_name(api.name), ' = 1;', sep='')
    # Load commands
    for cmd in api.commands.values():
        out('self->', cmd_name(cmd.name), ' = getProcAddress(get_proc_address, "', cmd.name, '");', sep='')
        out('if (!self->', cmd_name(cmd.name), ') return -1;', sep='')
    # End conditional
    out.indent -= 1
    out('} else {')
    out('    self->', const_name(api.name), ' = 0;', sep='')
    out('}')
    out('#endif /*', api.name, '*/', indent=0)


def gen_ctxinit(registry, dest):
    reg, apis = load_reg(registry)
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_INIT_H_')
    out('#define _PYCGLES2_INIT_H_')
    out('#include <Python.h>')
    out('#include <pycgles2.h>')
    out('#include "gl.h"')
    out('#include "ctxstruct.h"')
    out('')
    out('')
    out('static void *')
    out('getProcAddress(PyObject *obj, const char *proc)')
    out('{')
    out.indent += 1
    out('PyObject *params, *ret;')
    out('void *out;')
    out('if (!(params = Py_BuildValue("(s)", proc)))')
    out('    return NULL;')
    out('if (!(ret = PyObject_Call(obj, params, NULL))) {')
    out('    Py_DECREF(params);')
    out('    return NULL;')
    out('}')
    out('out = PyLong_AsVoidPtr(ret);')
    out('Py_DECREF(ret);')
    out('Py_DECREF(params);')
    out('return out;')
    out.indent -= 1
    out('}')
    out('')
    out('')
    out('static int')
    out('hasExtension(const char *s, const char *ext)')
    out('{')
    out.indent += 1
    out('const char *start, *where;')
    out('/* Extension names should not have spaces */')
    out("where = strchr(ext, ' ');")
    out(r"if (where || *ext == '\0') return 0;")
    out('start = s;')
    out('for (;;) {')
    out('    where = strstr(start, ext);')
    out('    if (!where) break;')
    out('    const char *terminator = where + strlen(ext);')
    out("    if (where == start || *(where - 1) == ' ')")
    out(r"        if (*terminator == ' ' || *terminator == '\0')")
    out('            return 1;')
    out('    start = terminator;')
    out('}')
    out('return 0;')
    out.indent -= 1
    out('}')
    out('')
    out('')
    out('static int')
    out('PyCGLES2_ContextInit(PyObject *_self, PyObject *args, PyObject *kwds)')
    out('{')
    out.indent += 1
    out('PyObject *make_current, *get_proc_address, *tmp;')
    out('PFNGLGETSTRINGPROC _glGetString;')
    out('const char *s;')
    out('PyCGLES2_Context *self = (PyCGLES2_Context*) _self;')
    out('static char *kwlist[] = {"make_current", "get_proc_address", NULL};')
    out('if (!PyArg_ParseTupleAndKeywords(args, kwds, "OO", kwlist, '
        '&make_current, &get_proc_address))')
    out('    return -1;')
    # Set the variables
    out('tmp = self->make_current;')
    out('Py_INCREF(make_current);')
    out('self->make_current = make_current;')
    out('Py_XDECREF(tmp);')
    out('tmp = self->get_proc_address;')
    out('Py_INCREF(get_proc_address);')
    out('self->get_proc_address = get_proc_address;')
    out('Py_XDECREF(tmp);')
    # First, we need to fetch glGetString
    out('_glGetString = getProcAddress(get_proc_address, "glGetString");')
    out('if (!_glGetString) return -1;')
    # Parse OpenGL version into (major, minor)
    out('s = (const char*) _glGetString(GL_VERSION);')
    out('if (!s) {')
    out('    PyErr_SetString(PyExc_RuntimeError, "glGetString returned NULL");')
    out('    return -1;')
    out('}')
    out("char *dot = strchr(s, '.');")
    out('if (!dot) {')
    out('    PyErr_SetString(PyExc_RuntimeError, "Could not get OpenGL version");')
    out('    return -1;')
    out('}')
    out("char major = *(dot - sizeof(char)) - '0';")
    out("char minor = *(dot + sizeof(char)) - ')';")
    out('if (minor < 0 || minor > 9) minor = 0;')
    out('if (major < 0 || major > 9) {')
    out('    PyErr_SetString(PyExc_RuntimeError, "Invalid OpenGL version");')
    out('    return -1;')
    out('}')
    out('if (strncmp(s, "OpenGL ES", sizeof(char)*9) != 0) {')
    out('    puts(s);')
    out('    PyErr_SetString(PyExc_RuntimeError, "Context is not OpenGL ES");')
    out('    return -1;')
    out('}')
    # Get OpenGL extensions string
    out('s = (const char*) _glGetString(GL_EXTENSIONS);')
    out('if (!s) {')
    out('    PyErr_SetString(PyExc_RuntimeError, "glGetString returned NULL");')
    out('    return -1;')
    out('}')
    # Init the APIs!!!
    for api in apis:
        _gen_init_api(out, api)
    out('return 0;')
    out.indent -= 1
    out('}')
    out('#endif /* _PYCGLES2_INIT_H_ */')


def task_ctxinit():
    return {
        'basename': 'src/ctxinit.h',
        'actions': [(gen_ctxinit, ['gl.xml', 'src/ctxinit.h'])],
        'targets': ['src/ctxinit.h'],
        'file_dep': ['dodo.py', 'gl.xml'],
    }


""" src/ctxmembers.h """


def gen_ctxmembers(registry, dest):
    reg, apis = load_reg(registry)
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_CTXMEMBERS_H_')
    out('#define _PYCGLES2_CTXMEMBERS_H_')
    out('#include <Python.h>')
    out('#include <structmember.h>')
    out('#include <pycgles2.h>')
    out('#include "ctxstruct.h"')
    out('')
    out('')
    # Generate the getter setter table
    out('static PyMemberDef PyCGLES2_ContextMembers[] = {')
    out.indent += 1
    out('{"make_current",')
    out(' T_OBJECT_EX,')
    out(' offsetof(PyCGLES2_Context, make_current),')
    out(' READONLY,')
    out(' "make_current callable"},')
    out('{"get_proc_address",')
    out(' T_OBJECT_EX,')
    out(' offsetof(PyCGLES2_Context, get_proc_address),')
    out(' READONLY,')
    out(' "get_proc_address callable"},')
    for api in apis:
        out('#ifdef', api.name, indent=0)
        out('{"' + api.name + '",')
        out(' T_BOOL,')
        out(' offsetof(PyCGLES2_Context, ' + const_name(api.name) + '),')
        out(' READONLY,')
        out(' "True if ' + api.name + ' is supported"},')
        out('#endif /*', api.name, '*/', indent=0)
    out('{NULL}')
    out.indent -= 1
    out('};')
    out('#endif /* _PYCGLES2_CTXMEMBERS_H_ */')


def task_ctxmembers():
    return {
        'basename': 'src/ctxmembers.h',
        'actions': [(gen_ctxmembers, ['gl.xml', 'src/ctxmembers.h'])],
        'targets': ['src/ctxmembers.h'],
        'file_dep': ['dodo.py', 'gl.xml'],
    }


""" Generate feature/extension stubs """


def gen_stub(api, dest):
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_' + api.name.upper() + '_H_')
    out('#define _PYCGLES2_' + api.name.upper() + '_H_')
    out('#ifdef', api.name)
    out('#include <Python.h>')
    out('#include <pycgles2.h>')
    out('#include "gl.h"')
    out('#include "util.h"')
    out('#include "ctxstruct.h"')
    out('')
    out('')
    # Generate stubs
    for cmd in api.commands.values():
        out('/* TODO(NotImplemented):', cmd.name, '*/')
        out('static PyObject *')
        out('PyCGLES2_' + cmd.name + '(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)')
        out('{')
        out.indent += 1
        out('/*', cmd.text, '*/')
        out('PyErr_SetString(PyExc_NotImplementedError, "' + cmd.name + '");')
        out('return NULL;')
        out.indent -= 1
        out('}')
        out('')
        out('')
    # Generate Module init stub (with feature/extension constants)
    out('static int')
    out('PyCGLES2_' + api.name + '(PyObject *m)')
    out('{')
    out.indent += 1
    # Module constants
    out('static const PyCGLES2_Enum enums[] = {')
    out.indent += 1
    for enum in api.enums.values():
        name = enum.name
        value = enum.name
        out('{"', enum.name, '", ', enum.name, '},', sep='')
    out('{NULL, 0}')
    out.indent -= 1
    out('};')
    out('const PyCGLES2_Enum *e;')
    out('for (e = enums; e->name != NULL; ++e)')
    out('    if (PyModule_AddIntConstant(m, e->name, e->value) != 0)')
    out('        return 0;')
    out('return 1;')
    out.indent -= 1
    out('}')
    out('')
    out('')
    out('#endif /*', api.name, '*/')
    out('#endif /* _PYCGLES2_' + api.name.upper() + '_H_ */')


def gen_stubs(reg):
    reg, apis = load_reg(reg)
    for api in apis:
        dest = os.path.join('src', '{0}.h'.format(api.name))
        if not os.path.exists(dest):
            gen_stub(api, dest)


def task_stubs():
    targets = []
    reg, apis = load_reg('gl.xml')
    for api in apis:
        targets.append('src/{0}.h'.format(api.name))
    return {
        'actions': [(gen_stubs, ['gl.xml'])],
        'file_dep': ['dodo.py', 'gl.xml'],
        'targets': targets,
    }


""" Generate list of methods """


def gen_ctxmethods(reg, dest):
    reg, apis = load_reg('gl.xml')
    out = Printer(open(dest, 'w'))
    out('#ifndef _PYCGLES2_CTXMETHODS_H_')
    out('#define _PYCGLES2_CTXMETHODS_H_')
    out('#include <pycgles2.h>')
    # Include all the API headers
    for api in apis:
        out('#include "' + api.name + '.h"')
    out('')
    out('')
    out('static PyMethodDef PyCGLES2_ContextMethods[] = {')
    out.indent += 1
    for api in apis:
        out('#ifdef', api.name, indent=0)
        for cmd in api.commands.values():
            out('{"' + cmd_name(cmd.name) + '",') # name
            out(' (PyCFunction) PyCGLES2_' + cmd.name + ',')
            out(' METH_VARARGS | METH_KEYWORDS,')
            out(' "' + cmd.text + '"},')
        out('#endif /*', api.name, '*/', indent=0)
    out('{NULL}')
    out.indent -= 1
    out('};')
    out('#endif /* _PYCGLES2_CTXMETHODS_H_ */')


# def task_ctxmethods():
#     return {
#         'basename': 'src/ctxmethods.h',
#         'actions': [(gen_ctxmethods, ['gl.xml', 'src/ctxmethods.h'])],
#         'targets': ['src/ctxmethods.h'],
#         'file_dep': ['dodo.py', 'gl.xml'],
#     }


""" Generate initmodules.h """


def gen_initmodules(reg, dest):
    reg, apis = load_reg('gl.xml')
    out = Printer(open(dest, 'w'))
    for api in apis:
        out('#ifdef', api.name)
        out('if (!PyCGLES2_' + api.name + '(m)) goto cleanup_module;')
        out('#endif')


def task_initmodules_h():
    return {
        'basename': 'src/initmodules.h',
        'actions': [(gen_initmodules, ['gl.xml', 'src/initmodules.h'])],
        'targets': ['src/initmodules.h'],
        'file_dep': ['dodo.py', 'gl.xml'],
    }

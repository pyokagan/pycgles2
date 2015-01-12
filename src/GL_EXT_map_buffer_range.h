#ifndef _PYCGLES2_GL_EXT_MAP_BUFFER_RANGE_H_
#define _PYCGLES2_GL_EXT_MAP_BUFFER_RANGE_H_
#ifdef GL_EXT_map_buffer_range
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glMapBufferRangeEXT */
static PyObject *
PyCGLES2_glMapBufferRangeEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void *glMapBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) */
    PyErr_SetString(PyExc_NotImplementedError, "glMapBufferRangeEXT");
    return NULL;
}


/* TODO(NotImplemented): glFlushMappedBufferRangeEXT */
static PyObject *
PyCGLES2_glFlushMappedBufferRangeEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFlushMappedBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length) */
    PyErr_SetString(PyExc_NotImplementedError, "glFlushMappedBufferRangeEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_map_buffer_range(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAP_READ_BIT_EXT", GL_MAP_READ_BIT_EXT},
        {"GL_MAP_WRITE_BIT_EXT", GL_MAP_WRITE_BIT_EXT},
        {"GL_MAP_INVALIDATE_RANGE_BIT_EXT", GL_MAP_INVALIDATE_RANGE_BIT_EXT},
        {"GL_MAP_INVALIDATE_BUFFER_BIT_EXT", GL_MAP_INVALIDATE_BUFFER_BIT_EXT},
        {"GL_MAP_FLUSH_EXPLICIT_BIT_EXT", GL_MAP_FLUSH_EXPLICIT_BIT_EXT},
        {"GL_MAP_UNSYNCHRONIZED_BIT_EXT", GL_MAP_UNSYNCHRONIZED_BIT_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_map_buffer_range */
#endif /* _PYCGLES2_GL_EXT_MAP_BUFFER_RANGE_H_ */

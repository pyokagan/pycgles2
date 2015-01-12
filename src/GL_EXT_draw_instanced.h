#ifndef _PYCGLES2_GL_EXT_DRAW_INSTANCED_H_
#define _PYCGLES2_GL_EXT_DRAW_INSTANCED_H_
#ifdef GL_EXT_draw_instanced
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawArraysInstancedEXT */
static PyObject *
PyCGLES2_glDrawArraysInstancedEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysInstancedEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedEXT */
static PyObject *
PyCGLES2_glDrawElementsInstancedEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_draw_instanced(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_draw_instanced */
#endif /* _PYCGLES2_GL_EXT_DRAW_INSTANCED_H_ */

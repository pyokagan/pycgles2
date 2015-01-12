#ifndef _PYCGLES2_GL_NV_DRAW_INSTANCED_H_
#define _PYCGLES2_GL_NV_DRAW_INSTANCED_H_
#ifdef GL_NV_draw_instanced
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawArraysInstancedNV */
static PyObject *
PyCGLES2_glDrawArraysInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysInstancedNV (GLenum mode, GLint first, GLsizei count, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedNV */
static PyObject *
PyCGLES2_glDrawElementsInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedNV (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_draw_instanced(PyObject *m)
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


#endif /* GL_NV_draw_instanced */
#endif /* _PYCGLES2_GL_NV_DRAW_INSTANCED_H_ */

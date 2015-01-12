#ifndef _PYCGLES2_GL_ANGLE_INSTANCED_ARRAYS_H_
#define _PYCGLES2_GL_ANGLE_INSTANCED_ARRAYS_H_
#ifdef GL_ANGLE_instanced_arrays
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawArraysInstancedANGLE */
static PyObject *
PyCGLES2_glDrawArraysInstancedANGLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysInstancedANGLE");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedANGLE */
static PyObject *
PyCGLES2_glDrawElementsInstancedANGLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedANGLE");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribDivisorANGLE */
static PyObject *
PyCGLES2_glVertexAttribDivisorANGLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribDivisorANGLE (GLuint index, GLuint divisor) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribDivisorANGLE");
    return NULL;
}


static int
PyCGLES2_GL_ANGLE_instanced_arrays(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE", GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_instanced_arrays */
#endif /* _PYCGLES2_GL_ANGLE_INSTANCED_ARRAYS_H_ */

#ifndef _PYCGLES2_GL_NV_NON_SQUARE_MATRICES_H_
#define _PYCGLES2_GL_NV_NON_SQUARE_MATRICES_H_
#ifdef GL_NV_non_square_matrices
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glUniformMatrix2x3fvNV */
static PyObject *
PyCGLES2_glUniformMatrix2x3fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix2x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix2x3fvNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix3x2fvNV */
static PyObject *
PyCGLES2_glUniformMatrix3x2fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix3x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix3x2fvNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix2x4fvNV */
static PyObject *
PyCGLES2_glUniformMatrix2x4fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix2x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix2x4fvNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix4x2fvNV */
static PyObject *
PyCGLES2_glUniformMatrix4x2fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix4x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix4x2fvNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix3x4fvNV */
static PyObject *
PyCGLES2_glUniformMatrix3x4fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix3x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix3x4fvNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix4x3fvNV */
static PyObject *
PyCGLES2_glUniformMatrix4x3fvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix4x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix4x3fvNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_non_square_matrices(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_FLOAT_MAT2x3_NV", GL_FLOAT_MAT2x3_NV},
        {"GL_FLOAT_MAT2x4_NV", GL_FLOAT_MAT2x4_NV},
        {"GL_FLOAT_MAT3x2_NV", GL_FLOAT_MAT3x2_NV},
        {"GL_FLOAT_MAT3x4_NV", GL_FLOAT_MAT3x4_NV},
        {"GL_FLOAT_MAT4x2_NV", GL_FLOAT_MAT4x2_NV},
        {"GL_FLOAT_MAT4x3_NV", GL_FLOAT_MAT4x3_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_non_square_matrices */
#endif /* _PYCGLES2_GL_NV_NON_SQUARE_MATRICES_H_ */

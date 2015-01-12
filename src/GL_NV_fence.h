#ifndef _PYCGLES2_GL_NV_FENCE_H_
#define _PYCGLES2_GL_NV_FENCE_H_
#ifdef GL_NV_fence
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDeleteFencesNV */
static PyObject *
PyCGLES2_glDeleteFencesNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteFencesNV (GLsizei n, const GLuint *fences) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteFencesNV");
    return NULL;
}


/* TODO(NotImplemented): glGenFencesNV */
static PyObject *
PyCGLES2_glGenFencesNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenFencesNV (GLsizei n, GLuint *fences) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenFencesNV");
    return NULL;
}


/* TODO(NotImplemented): glIsFenceNV */
static PyObject *
PyCGLES2_glIsFenceNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsFenceNV (GLuint fence) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsFenceNV");
    return NULL;
}


/* TODO(NotImplemented): glTestFenceNV */
static PyObject *
PyCGLES2_glTestFenceNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glTestFenceNV (GLuint fence) */
    PyErr_SetString(PyExc_NotImplementedError, "glTestFenceNV");
    return NULL;
}


/* TODO(NotImplemented): glGetFenceivNV */
static PyObject *
PyCGLES2_glGetFenceivNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFenceivNV (GLuint fence, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFenceivNV");
    return NULL;
}


/* TODO(NotImplemented): glFinishFenceNV */
static PyObject *
PyCGLES2_glFinishFenceNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFinishFenceNV (GLuint fence) */
    PyErr_SetString(PyExc_NotImplementedError, "glFinishFenceNV");
    return NULL;
}


/* TODO(NotImplemented): glSetFenceNV */
static PyObject *
PyCGLES2_glSetFenceNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSetFenceNV (GLuint fence, GLenum condition) */
    PyErr_SetString(PyExc_NotImplementedError, "glSetFenceNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_fence(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_ALL_COMPLETED_NV", GL_ALL_COMPLETED_NV},
        {"GL_FENCE_STATUS_NV", GL_FENCE_STATUS_NV},
        {"GL_FENCE_CONDITION_NV", GL_FENCE_CONDITION_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_fence */
#endif /* _PYCGLES2_GL_NV_FENCE_H_ */

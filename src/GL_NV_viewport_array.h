#ifndef _PYCGLES2_GL_NV_VIEWPORT_ARRAY_H_
#define _PYCGLES2_GL_NV_VIEWPORT_ARRAY_H_
#ifdef GL_NV_viewport_array
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glViewportArrayvNV */
static PyObject *
PyCGLES2_glViewportArrayvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glViewportArrayvNV (GLuint first, GLsizei count, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glViewportArrayvNV");
    return NULL;
}


/* TODO(NotImplemented): glViewportIndexedfNV */
static PyObject *
PyCGLES2_glViewportIndexedfNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glViewportIndexedfNV (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) */
    PyErr_SetString(PyExc_NotImplementedError, "glViewportIndexedfNV");
    return NULL;
}


/* TODO(NotImplemented): glViewportIndexedfvNV */
static PyObject *
PyCGLES2_glViewportIndexedfvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glViewportIndexedfvNV (GLuint index, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glViewportIndexedfvNV");
    return NULL;
}


/* TODO(NotImplemented): glScissorArrayvNV */
static PyObject *
PyCGLES2_glScissorArrayvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glScissorArrayvNV (GLuint first, GLsizei count, const GLint *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glScissorArrayvNV");
    return NULL;
}


/* TODO(NotImplemented): glScissorIndexedNV */
static PyObject *
PyCGLES2_glScissorIndexedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glScissorIndexedNV (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glScissorIndexedNV");
    return NULL;
}


/* TODO(NotImplemented): glScissorIndexedvNV */
static PyObject *
PyCGLES2_glScissorIndexedvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glScissorIndexedvNV (GLuint index, const GLint *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glScissorIndexedvNV");
    return NULL;
}


/* TODO(NotImplemented): glDepthRangeArrayfvNV */
static PyObject *
PyCGLES2_glDepthRangeArrayfvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDepthRangeArrayfvNV (GLuint first, GLsizei count, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glDepthRangeArrayfvNV");
    return NULL;
}


/* TODO(NotImplemented): glDepthRangeIndexedfNV */
static PyObject *
PyCGLES2_glDepthRangeIndexedfNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDepthRangeIndexedfNV (GLuint index, GLfloat n, GLfloat f) */
    PyErr_SetString(PyExc_NotImplementedError, "glDepthRangeIndexedfNV");
    return NULL;
}


/* TODO(NotImplemented): glGetFloati_vNV */
static PyObject *
PyCGLES2_glGetFloati_vNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFloati_vNV (GLenum target, GLuint index, GLfloat *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFloati_vNV");
    return NULL;
}


/* TODO(NotImplemented): glEnableiNV */
static PyObject *
PyCGLES2_glEnableiNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEnableiNV (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glEnableiNV");
    return NULL;
}


/* TODO(NotImplemented): glDisableiNV */
static PyObject *
PyCGLES2_glDisableiNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDisableiNV (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glDisableiNV");
    return NULL;
}


/* TODO(NotImplemented): glIsEnablediNV */
static PyObject *
PyCGLES2_glIsEnablediNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsEnablediNV (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsEnablediNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_viewport_array(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAX_VIEWPORTS_NV", GL_MAX_VIEWPORTS_NV},
        {"GL_VIEWPORT_SUBPIXEL_BITS_NV", GL_VIEWPORT_SUBPIXEL_BITS_NV},
        {"GL_VIEWPORT_BOUNDS_RANGE_NV", GL_VIEWPORT_BOUNDS_RANGE_NV},
        {"GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV", GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_viewport_array */
#endif /* _PYCGLES2_GL_NV_VIEWPORT_ARRAY_H_ */

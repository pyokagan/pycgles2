#ifndef _PYCGLES2_GL_NV_BINDLESS_TEXTURE_H_
#define _PYCGLES2_GL_NV_BINDLESS_TEXTURE_H_
#ifdef GL_NV_bindless_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetTextureHandleNV */
static PyObject *
PyCGLES2_glGetTextureHandleNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint64 glGetTextureHandleNV (GLuint texture) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTextureHandleNV");
    return NULL;
}


/* TODO(NotImplemented): glGetTextureSamplerHandleNV */
static PyObject *
PyCGLES2_glGetTextureSamplerHandleNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint64 glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTextureSamplerHandleNV");
    return NULL;
}


/* TODO(NotImplemented): glMakeTextureHandleResidentNV */
static PyObject *
PyCGLES2_glMakeTextureHandleResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMakeTextureHandleResidentNV (GLuint64 handle) */
    PyErr_SetString(PyExc_NotImplementedError, "glMakeTextureHandleResidentNV");
    return NULL;
}


/* TODO(NotImplemented): glMakeTextureHandleNonResidentNV */
static PyObject *
PyCGLES2_glMakeTextureHandleNonResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMakeTextureHandleNonResidentNV (GLuint64 handle) */
    PyErr_SetString(PyExc_NotImplementedError, "glMakeTextureHandleNonResidentNV");
    return NULL;
}


/* TODO(NotImplemented): glGetImageHandleNV */
static PyObject *
PyCGLES2_glGetImageHandleNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint64 glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetImageHandleNV");
    return NULL;
}


/* TODO(NotImplemented): glMakeImageHandleResidentNV */
static PyObject *
PyCGLES2_glMakeImageHandleResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMakeImageHandleResidentNV (GLuint64 handle, GLenum access) */
    PyErr_SetString(PyExc_NotImplementedError, "glMakeImageHandleResidentNV");
    return NULL;
}


/* TODO(NotImplemented): glMakeImageHandleNonResidentNV */
static PyObject *
PyCGLES2_glMakeImageHandleNonResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMakeImageHandleNonResidentNV (GLuint64 handle) */
    PyErr_SetString(PyExc_NotImplementedError, "glMakeImageHandleNonResidentNV");
    return NULL;
}


/* TODO(NotImplemented): glUniformHandleui64NV */
static PyObject *
PyCGLES2_glUniformHandleui64NV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformHandleui64NV (GLint location, GLuint64 value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformHandleui64NV");
    return NULL;
}


/* TODO(NotImplemented): glUniformHandleui64vNV */
static PyObject *
PyCGLES2_glUniformHandleui64vNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformHandleui64vNV");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformHandleui64NV */
static PyObject *
PyCGLES2_glProgramUniformHandleui64NV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformHandleui64NV");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformHandleui64vNV */
static PyObject *
PyCGLES2_glProgramUniformHandleui64vNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 *values) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformHandleui64vNV");
    return NULL;
}


/* TODO(NotImplemented): glIsTextureHandleResidentNV */
static PyObject *
PyCGLES2_glIsTextureHandleResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsTextureHandleResidentNV (GLuint64 handle) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsTextureHandleResidentNV");
    return NULL;
}


/* TODO(NotImplemented): glIsImageHandleResidentNV */
static PyObject *
PyCGLES2_glIsImageHandleResidentNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsImageHandleResidentNV (GLuint64 handle) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsImageHandleResidentNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_bindless_texture(PyObject *m)
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


#endif /* GL_NV_bindless_texture */
#endif /* _PYCGLES2_GL_NV_BINDLESS_TEXTURE_H_ */

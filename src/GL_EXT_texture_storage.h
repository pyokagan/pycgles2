#ifndef _PYCGLES2_GL_EXT_TEXTURE_STORAGE_H_
#define _PYCGLES2_GL_EXT_TEXTURE_STORAGE_H_
#ifdef GL_EXT_texture_storage
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTexStorage1DEXT */
static PyObject *
PyCGLES2_glTexStorage1DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage1DEXT");
    return NULL;
}


/* TODO(NotImplemented): glTexStorage2DEXT */
static PyObject *
PyCGLES2_glTexStorage2DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage2DEXT");
    return NULL;
}


/* TODO(NotImplemented): glTexStorage3DEXT */
static PyObject *
PyCGLES2_glTexStorage3DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage3DEXT");
    return NULL;
}


/* TODO(NotImplemented): glTextureStorage1DEXT */
static PyObject *
PyCGLES2_glTextureStorage1DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) */
    PyErr_SetString(PyExc_NotImplementedError, "glTextureStorage1DEXT");
    return NULL;
}


/* TODO(NotImplemented): glTextureStorage2DEXT */
static PyObject *
PyCGLES2_glTextureStorage2DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glTextureStorage2DEXT");
    return NULL;
}


/* TODO(NotImplemented): glTextureStorage3DEXT */
static PyObject *
PyCGLES2_glTextureStorage3DEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) */
    PyErr_SetString(PyExc_NotImplementedError, "glTextureStorage3DEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_texture_storage(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_IMMUTABLE_FORMAT_EXT", GL_TEXTURE_IMMUTABLE_FORMAT_EXT},
        {"GL_ALPHA8_EXT", GL_ALPHA8_EXT},
        {"GL_LUMINANCE8_EXT", GL_LUMINANCE8_EXT},
        {"GL_LUMINANCE8_ALPHA8_EXT", GL_LUMINANCE8_ALPHA8_EXT},
        {"GL_RGBA32F_EXT", GL_RGBA32F_EXT},
        {"GL_RGB32F_EXT", GL_RGB32F_EXT},
        {"GL_ALPHA32F_EXT", GL_ALPHA32F_EXT},
        {"GL_LUMINANCE32F_EXT", GL_LUMINANCE32F_EXT},
        {"GL_LUMINANCE_ALPHA32F_EXT", GL_LUMINANCE_ALPHA32F_EXT},
        {"GL_ALPHA16F_EXT", GL_ALPHA16F_EXT},
        {"GL_LUMINANCE16F_EXT", GL_LUMINANCE16F_EXT},
        {"GL_LUMINANCE_ALPHA16F_EXT", GL_LUMINANCE_ALPHA16F_EXT},
        {"GL_R32F_EXT", GL_R32F_EXT},
        {"GL_RG32F_EXT", GL_RG32F_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_storage */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_STORAGE_H_ */

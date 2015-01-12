#ifndef _PYCGLES2_GL_OES_TEXTURE_3D_H_
#define _PYCGLES2_GL_OES_TEXTURE_3D_H_
#ifdef GL_OES_texture_3D
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTexImage3DOES */
static PyObject *
PyCGLES2_glTexImage3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexImage3DOES");
    return NULL;
}


/* TODO(NotImplemented): glTexSubImage3DOES */
static PyObject *
PyCGLES2_glTexSubImage3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexSubImage3DOES");
    return NULL;
}


/* TODO(NotImplemented): glCopyTexSubImage3DOES */
static PyObject *
PyCGLES2_glCopyTexSubImage3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyTexSubImage3DOES");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexImage3DOES */
static PyObject *
PyCGLES2_glCompressedTexImage3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexImage3DOES");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexSubImage3DOES */
static PyObject *
PyCGLES2_glCompressedTexSubImage3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexSubImage3DOES");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferTexture3DOES */
static PyObject *
PyCGLES2_glFramebufferTexture3DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferTexture3DOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_texture_3D(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_WRAP_R_OES", GL_TEXTURE_WRAP_R_OES},
        {"GL_TEXTURE_3D_OES", GL_TEXTURE_3D_OES},
        {"GL_TEXTURE_BINDING_3D_OES", GL_TEXTURE_BINDING_3D_OES},
        {"GL_MAX_3D_TEXTURE_SIZE_OES", GL_MAX_3D_TEXTURE_SIZE_OES},
        {"GL_SAMPLER_3D_OES", GL_SAMPLER_3D_OES},
        {"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES", GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_texture_3D */
#endif /* _PYCGLES2_GL_OES_TEXTURE_3D_H_ */

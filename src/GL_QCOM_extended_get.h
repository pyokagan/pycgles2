#ifndef _PYCGLES2_GL_QCOM_EXTENDED_GET_H_
#define _PYCGLES2_GL_QCOM_EXTENDED_GET_H_
#ifdef GL_QCOM_extended_get
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glExtGetTexturesQCOM */
static PyObject *
PyCGLES2_glExtGetTexturesQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetTexturesQCOM (GLuint *textures, GLint maxTextures, GLint *numTextures) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetTexturesQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetBuffersQCOM */
static PyObject *
PyCGLES2_glExtGetBuffersQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetBuffersQCOM (GLuint *buffers, GLint maxBuffers, GLint *numBuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetBuffersQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetRenderbuffersQCOM */
static PyObject *
PyCGLES2_glExtGetRenderbuffersQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetRenderbuffersQCOM (GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetRenderbuffersQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetFramebuffersQCOM */
static PyObject *
PyCGLES2_glExtGetFramebuffersQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetFramebuffersQCOM (GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetFramebuffersQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetTexLevelParameterivQCOM */
static PyObject *
PyCGLES2_glExtGetTexLevelParameterivQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetTexLevelParameterivQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtTexObjectStateOverrideiQCOM */
static PyObject *
PyCGLES2_glExtTexObjectStateOverrideiQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtTexObjectStateOverrideiQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetTexSubImageQCOM */
static PyObject *
PyCGLES2_glExtGetTexSubImageQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetTexSubImageQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetBufferPointervQCOM */
static PyObject *
PyCGLES2_glExtGetBufferPointervQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetBufferPointervQCOM (GLenum target, void **params) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetBufferPointervQCOM");
    return NULL;
}


static int
PyCGLES2_GL_QCOM_extended_get(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_WIDTH_QCOM", GL_TEXTURE_WIDTH_QCOM},
        {"GL_TEXTURE_HEIGHT_QCOM", GL_TEXTURE_HEIGHT_QCOM},
        {"GL_TEXTURE_DEPTH_QCOM", GL_TEXTURE_DEPTH_QCOM},
        {"GL_TEXTURE_INTERNAL_FORMAT_QCOM", GL_TEXTURE_INTERNAL_FORMAT_QCOM},
        {"GL_TEXTURE_FORMAT_QCOM", GL_TEXTURE_FORMAT_QCOM},
        {"GL_TEXTURE_TYPE_QCOM", GL_TEXTURE_TYPE_QCOM},
        {"GL_TEXTURE_IMAGE_VALID_QCOM", GL_TEXTURE_IMAGE_VALID_QCOM},
        {"GL_TEXTURE_NUM_LEVELS_QCOM", GL_TEXTURE_NUM_LEVELS_QCOM},
        {"GL_TEXTURE_TARGET_QCOM", GL_TEXTURE_TARGET_QCOM},
        {"GL_TEXTURE_OBJECT_VALID_QCOM", GL_TEXTURE_OBJECT_VALID_QCOM},
        {"GL_STATE_RESTORE", GL_STATE_RESTORE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_extended_get */
#endif /* _PYCGLES2_GL_QCOM_EXTENDED_GET_H_ */

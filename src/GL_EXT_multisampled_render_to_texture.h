#ifndef _PYCGLES2_GL_EXT_MULTISAMPLED_RENDER_TO_TEXTURE_H_
#define _PYCGLES2_GL_EXT_MULTISAMPLED_RENDER_TO_TEXTURE_H_
#ifdef GL_EXT_multisampled_render_to_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glRenderbufferStorageMultisampleEXT */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisampleEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisampleEXT");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferTexture2DMultisampleEXT */
static PyObject *
PyCGLES2_glFramebufferTexture2DMultisampleEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferTexture2DMultisampleEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferTexture2DMultisampleEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_multisampled_render_to_texture(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT", GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT},
        {"GL_RENDERBUFFER_SAMPLES_EXT", GL_RENDERBUFFER_SAMPLES_EXT},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT},
        {"GL_MAX_SAMPLES_EXT", GL_MAX_SAMPLES_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_multisampled_render_to_texture */
#endif /* _PYCGLES2_GL_EXT_MULTISAMPLED_RENDER_TO_TEXTURE_H_ */

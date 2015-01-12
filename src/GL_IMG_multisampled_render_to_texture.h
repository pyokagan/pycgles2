#ifndef _PYCGLES2_GL_IMG_MULTISAMPLED_RENDER_TO_TEXTURE_H_
#define _PYCGLES2_GL_IMG_MULTISAMPLED_RENDER_TO_TEXTURE_H_
#ifdef GL_IMG_multisampled_render_to_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glRenderbufferStorageMultisampleIMG */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisampleIMG(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisampleIMG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisampleIMG");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferTexture2DMultisampleIMG */
static PyObject *
PyCGLES2_glFramebufferTexture2DMultisampleIMG(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferTexture2DMultisampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferTexture2DMultisampleIMG");
    return NULL;
}


static int
PyCGLES2_GL_IMG_multisampled_render_to_texture(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RENDERBUFFER_SAMPLES_IMG", GL_RENDERBUFFER_SAMPLES_IMG},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG},
        {"GL_MAX_SAMPLES_IMG", GL_MAX_SAMPLES_IMG},
        {"GL_TEXTURE_SAMPLES_IMG", GL_TEXTURE_SAMPLES_IMG},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_IMG_multisampled_render_to_texture */
#endif /* _PYCGLES2_GL_IMG_MULTISAMPLED_RENDER_TO_TEXTURE_H_ */

#ifndef _PYCGLES2_GL_APPLE_FRAMEBUFFER_MULTISAMPLE_H_
#define _PYCGLES2_GL_APPLE_FRAMEBUFFER_MULTISAMPLE_H_
#ifdef GL_APPLE_framebuffer_multisample
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glRenderbufferStorageMultisampleAPPLE */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisampleAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisampleAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glResolveMultisampleFramebufferAPPLE */
static PyObject *
PyCGLES2_glResolveMultisampleFramebufferAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glResolveMultisampleFramebufferAPPLE () */
    PyErr_SetString(PyExc_NotImplementedError, "glResolveMultisampleFramebufferAPPLE");
    return NULL;
}


static int
PyCGLES2_GL_APPLE_framebuffer_multisample(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RENDERBUFFER_SAMPLES_APPLE", GL_RENDERBUFFER_SAMPLES_APPLE},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE},
        {"GL_MAX_SAMPLES_APPLE", GL_MAX_SAMPLES_APPLE},
        {"GL_READ_FRAMEBUFFER_APPLE", GL_READ_FRAMEBUFFER_APPLE},
        {"GL_DRAW_FRAMEBUFFER_APPLE", GL_DRAW_FRAMEBUFFER_APPLE},
        {"GL_DRAW_FRAMEBUFFER_BINDING_APPLE", GL_DRAW_FRAMEBUFFER_BINDING_APPLE},
        {"GL_READ_FRAMEBUFFER_BINDING_APPLE", GL_READ_FRAMEBUFFER_BINDING_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_framebuffer_multisample */
#endif /* _PYCGLES2_GL_APPLE_FRAMEBUFFER_MULTISAMPLE_H_ */

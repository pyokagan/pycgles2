#ifndef _PYCGLES2_GL_NV_FRAMEBUFFER_MULTISAMPLE_H_
#define _PYCGLES2_GL_NV_FRAMEBUFFER_MULTISAMPLE_H_
#ifdef GL_NV_framebuffer_multisample
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glRenderbufferStorageMultisampleNV */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisampleNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisampleNV (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisampleNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_framebuffer_multisample(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RENDERBUFFER_SAMPLES_NV", GL_RENDERBUFFER_SAMPLES_NV},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV},
        {"GL_MAX_SAMPLES_NV", GL_MAX_SAMPLES_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_framebuffer_multisample */
#endif /* _PYCGLES2_GL_NV_FRAMEBUFFER_MULTISAMPLE_H_ */

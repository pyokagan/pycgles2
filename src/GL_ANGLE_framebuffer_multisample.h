#ifndef _PYCGLES2_GL_ANGLE_FRAMEBUFFER_MULTISAMPLE_H_
#define _PYCGLES2_GL_ANGLE_FRAMEBUFFER_MULTISAMPLE_H_
#ifdef GL_ANGLE_framebuffer_multisample
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glRenderbufferStorageMultisampleANGLE */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisampleANGLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisampleANGLE");
    return NULL;
}


static int
PyCGLES2_GL_ANGLE_framebuffer_multisample(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RENDERBUFFER_SAMPLES_ANGLE", GL_RENDERBUFFER_SAMPLES_ANGLE},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE},
        {"GL_MAX_SAMPLES_ANGLE", GL_MAX_SAMPLES_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_framebuffer_multisample */
#endif /* _PYCGLES2_GL_ANGLE_FRAMEBUFFER_MULTISAMPLE_H_ */

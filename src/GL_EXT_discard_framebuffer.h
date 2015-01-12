#ifndef _PYCGLES2_GL_EXT_DISCARD_FRAMEBUFFER_H_
#define _PYCGLES2_GL_EXT_DISCARD_FRAMEBUFFER_H_
#ifdef GL_EXT_discard_framebuffer
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDiscardFramebufferEXT */
static PyObject *
PyCGLES2_glDiscardFramebufferEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum *attachments) */
    PyErr_SetString(PyExc_NotImplementedError, "glDiscardFramebufferEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_discard_framebuffer(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COLOR_EXT", GL_COLOR_EXT},
        {"GL_DEPTH_EXT", GL_DEPTH_EXT},
        {"GL_STENCIL_EXT", GL_STENCIL_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_discard_framebuffer */
#endif /* _PYCGLES2_GL_EXT_DISCARD_FRAMEBUFFER_H_ */

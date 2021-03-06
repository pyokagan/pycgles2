#ifndef _PYCGLES2_GL_NV_FRAMEBUFFER_BLIT_H_
#define _PYCGLES2_GL_NV_FRAMEBUFFER_BLIT_H_
#ifdef GL_NV_framebuffer_blit
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBlitFramebufferNV */
static PyObject *
PyCGLES2_glBlitFramebufferNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlitFramebufferNV (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlitFramebufferNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_framebuffer_blit(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_READ_FRAMEBUFFER_NV", GL_READ_FRAMEBUFFER_NV},
        {"GL_DRAW_FRAMEBUFFER_NV", GL_DRAW_FRAMEBUFFER_NV},
        {"GL_DRAW_FRAMEBUFFER_BINDING_NV", GL_DRAW_FRAMEBUFFER_BINDING_NV},
        {"GL_READ_FRAMEBUFFER_BINDING_NV", GL_READ_FRAMEBUFFER_BINDING_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_framebuffer_blit */
#endif /* _PYCGLES2_GL_NV_FRAMEBUFFER_BLIT_H_ */

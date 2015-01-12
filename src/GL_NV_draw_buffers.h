#ifndef _PYCGLES2_GL_NV_DRAW_BUFFERS_H_
#define _PYCGLES2_GL_NV_DRAW_BUFFERS_H_
#ifdef GL_NV_draw_buffers
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawBuffersNV */
static PyObject *
PyCGLES2_glDrawBuffersNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawBuffersNV (GLsizei n, const GLenum *bufs) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawBuffersNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_draw_buffers(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAX_DRAW_BUFFERS_NV", GL_MAX_DRAW_BUFFERS_NV},
        {"GL_DRAW_BUFFER0_NV", GL_DRAW_BUFFER0_NV},
        {"GL_DRAW_BUFFER1_NV", GL_DRAW_BUFFER1_NV},
        {"GL_DRAW_BUFFER2_NV", GL_DRAW_BUFFER2_NV},
        {"GL_DRAW_BUFFER3_NV", GL_DRAW_BUFFER3_NV},
        {"GL_DRAW_BUFFER4_NV", GL_DRAW_BUFFER4_NV},
        {"GL_DRAW_BUFFER5_NV", GL_DRAW_BUFFER5_NV},
        {"GL_DRAW_BUFFER6_NV", GL_DRAW_BUFFER6_NV},
        {"GL_DRAW_BUFFER7_NV", GL_DRAW_BUFFER7_NV},
        {"GL_DRAW_BUFFER8_NV", GL_DRAW_BUFFER8_NV},
        {"GL_DRAW_BUFFER9_NV", GL_DRAW_BUFFER9_NV},
        {"GL_DRAW_BUFFER10_NV", GL_DRAW_BUFFER10_NV},
        {"GL_DRAW_BUFFER11_NV", GL_DRAW_BUFFER11_NV},
        {"GL_DRAW_BUFFER12_NV", GL_DRAW_BUFFER12_NV},
        {"GL_DRAW_BUFFER13_NV", GL_DRAW_BUFFER13_NV},
        {"GL_DRAW_BUFFER14_NV", GL_DRAW_BUFFER14_NV},
        {"GL_DRAW_BUFFER15_NV", GL_DRAW_BUFFER15_NV},
        {"GL_COLOR_ATTACHMENT0_NV", GL_COLOR_ATTACHMENT0_NV},
        {"GL_COLOR_ATTACHMENT1_NV", GL_COLOR_ATTACHMENT1_NV},
        {"GL_COLOR_ATTACHMENT2_NV", GL_COLOR_ATTACHMENT2_NV},
        {"GL_COLOR_ATTACHMENT3_NV", GL_COLOR_ATTACHMENT3_NV},
        {"GL_COLOR_ATTACHMENT4_NV", GL_COLOR_ATTACHMENT4_NV},
        {"GL_COLOR_ATTACHMENT5_NV", GL_COLOR_ATTACHMENT5_NV},
        {"GL_COLOR_ATTACHMENT6_NV", GL_COLOR_ATTACHMENT6_NV},
        {"GL_COLOR_ATTACHMENT7_NV", GL_COLOR_ATTACHMENT7_NV},
        {"GL_COLOR_ATTACHMENT8_NV", GL_COLOR_ATTACHMENT8_NV},
        {"GL_COLOR_ATTACHMENT9_NV", GL_COLOR_ATTACHMENT9_NV},
        {"GL_COLOR_ATTACHMENT10_NV", GL_COLOR_ATTACHMENT10_NV},
        {"GL_COLOR_ATTACHMENT11_NV", GL_COLOR_ATTACHMENT11_NV},
        {"GL_COLOR_ATTACHMENT12_NV", GL_COLOR_ATTACHMENT12_NV},
        {"GL_COLOR_ATTACHMENT13_NV", GL_COLOR_ATTACHMENT13_NV},
        {"GL_COLOR_ATTACHMENT14_NV", GL_COLOR_ATTACHMENT14_NV},
        {"GL_COLOR_ATTACHMENT15_NV", GL_COLOR_ATTACHMENT15_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_draw_buffers */
#endif /* _PYCGLES2_GL_NV_DRAW_BUFFERS_H_ */

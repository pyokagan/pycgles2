#ifndef _PYCGLES2_GL_NV_CONDITIONAL_RENDER_H_
#define _PYCGLES2_GL_NV_CONDITIONAL_RENDER_H_
#ifdef GL_NV_conditional_render
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBeginConditionalRenderNV */
static PyObject *
PyCGLES2_glBeginConditionalRenderNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginConditionalRenderNV (GLuint id, GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginConditionalRenderNV");
    return NULL;
}


/* TODO(NotImplemented): glEndConditionalRenderNV */
static PyObject *
PyCGLES2_glEndConditionalRenderNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndConditionalRenderNV () */
    PyErr_SetString(PyExc_NotImplementedError, "glEndConditionalRenderNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_conditional_render(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_QUERY_WAIT_NV", GL_QUERY_WAIT_NV},
        {"GL_QUERY_NO_WAIT_NV", GL_QUERY_NO_WAIT_NV},
        {"GL_QUERY_BY_REGION_WAIT_NV", GL_QUERY_BY_REGION_WAIT_NV},
        {"GL_QUERY_BY_REGION_NO_WAIT_NV", GL_QUERY_BY_REGION_NO_WAIT_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_conditional_render */
#endif /* _PYCGLES2_GL_NV_CONDITIONAL_RENDER_H_ */

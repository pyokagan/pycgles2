#ifndef _PYCGLES2_GL_OES_SAMPLE_SHADING_H_
#define _PYCGLES2_GL_OES_SAMPLE_SHADING_H_
#ifdef GL_OES_sample_shading
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glMinSampleShadingOES */
static PyObject *
PyCGLES2_glMinSampleShadingOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMinSampleShadingOES (GLfloat value) */
    PyErr_SetString(PyExc_NotImplementedError, "glMinSampleShadingOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_sample_shading(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_SAMPLE_SHADING_OES", GL_SAMPLE_SHADING_OES},
        {"GL_MIN_SAMPLE_SHADING_VALUE_OES", GL_MIN_SAMPLE_SHADING_VALUE_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_sample_shading */
#endif /* _PYCGLES2_GL_OES_SAMPLE_SHADING_H_ */

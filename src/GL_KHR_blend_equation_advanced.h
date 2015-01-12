#ifndef _PYCGLES2_GL_KHR_BLEND_EQUATION_ADVANCED_H_
#define _PYCGLES2_GL_KHR_BLEND_EQUATION_ADVANCED_H_
#ifdef GL_KHR_blend_equation_advanced
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBlendBarrierKHR */
static PyObject *
PyCGLES2_glBlendBarrierKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendBarrierKHR () */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendBarrierKHR");
    return NULL;
}


static int
PyCGLES2_GL_KHR_blend_equation_advanced(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MULTIPLY_KHR", GL_MULTIPLY_KHR},
        {"GL_SCREEN_KHR", GL_SCREEN_KHR},
        {"GL_OVERLAY_KHR", GL_OVERLAY_KHR},
        {"GL_DARKEN_KHR", GL_DARKEN_KHR},
        {"GL_LIGHTEN_KHR", GL_LIGHTEN_KHR},
        {"GL_COLORDODGE_KHR", GL_COLORDODGE_KHR},
        {"GL_COLORBURN_KHR", GL_COLORBURN_KHR},
        {"GL_HARDLIGHT_KHR", GL_HARDLIGHT_KHR},
        {"GL_SOFTLIGHT_KHR", GL_SOFTLIGHT_KHR},
        {"GL_DIFFERENCE_KHR", GL_DIFFERENCE_KHR},
        {"GL_EXCLUSION_KHR", GL_EXCLUSION_KHR},
        {"GL_HSL_HUE_KHR", GL_HSL_HUE_KHR},
        {"GL_HSL_SATURATION_KHR", GL_HSL_SATURATION_KHR},
        {"GL_HSL_COLOR_KHR", GL_HSL_COLOR_KHR},
        {"GL_HSL_LUMINOSITY_KHR", GL_HSL_LUMINOSITY_KHR},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_KHR_blend_equation_advanced */
#endif /* _PYCGLES2_GL_KHR_BLEND_EQUATION_ADVANCED_H_ */

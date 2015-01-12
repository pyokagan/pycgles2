#ifndef _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_H_
#define _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_H_
#ifdef GL_NV_blend_equation_advanced
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBlendParameteriNV */
static PyObject *
PyCGLES2_glBlendParameteriNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendParameteriNV (GLenum pname, GLint value) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendParameteriNV");
    return NULL;
}


/* TODO(NotImplemented): glBlendBarrierNV */
static PyObject *
PyCGLES2_glBlendBarrierNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendBarrierNV () */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendBarrierNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_blend_equation_advanced(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_BLEND_OVERLAP_NV", GL_BLEND_OVERLAP_NV},
        {"GL_BLEND_PREMULTIPLIED_SRC_NV", GL_BLEND_PREMULTIPLIED_SRC_NV},
        {"GL_BLUE_NV", GL_BLUE_NV},
        {"GL_COLORBURN_NV", GL_COLORBURN_NV},
        {"GL_COLORDODGE_NV", GL_COLORDODGE_NV},
        {"GL_CONJOINT_NV", GL_CONJOINT_NV},
        {"GL_CONTRAST_NV", GL_CONTRAST_NV},
        {"GL_DARKEN_NV", GL_DARKEN_NV},
        {"GL_DIFFERENCE_NV", GL_DIFFERENCE_NV},
        {"GL_DISJOINT_NV", GL_DISJOINT_NV},
        {"GL_DST_ATOP_NV", GL_DST_ATOP_NV},
        {"GL_DST_IN_NV", GL_DST_IN_NV},
        {"GL_DST_NV", GL_DST_NV},
        {"GL_DST_OUT_NV", GL_DST_OUT_NV},
        {"GL_DST_OVER_NV", GL_DST_OVER_NV},
        {"GL_EXCLUSION_NV", GL_EXCLUSION_NV},
        {"GL_GREEN_NV", GL_GREEN_NV},
        {"GL_HARDLIGHT_NV", GL_HARDLIGHT_NV},
        {"GL_HARDMIX_NV", GL_HARDMIX_NV},
        {"GL_HSL_COLOR_NV", GL_HSL_COLOR_NV},
        {"GL_HSL_HUE_NV", GL_HSL_HUE_NV},
        {"GL_HSL_LUMINOSITY_NV", GL_HSL_LUMINOSITY_NV},
        {"GL_HSL_SATURATION_NV", GL_HSL_SATURATION_NV},
        {"GL_INVERT_OVG_NV", GL_INVERT_OVG_NV},
        {"GL_INVERT_RGB_NV", GL_INVERT_RGB_NV},
        {"GL_LIGHTEN_NV", GL_LIGHTEN_NV},
        {"GL_LINEARBURN_NV", GL_LINEARBURN_NV},
        {"GL_LINEARDODGE_NV", GL_LINEARDODGE_NV},
        {"GL_LINEARLIGHT_NV", GL_LINEARLIGHT_NV},
        {"GL_MINUS_CLAMPED_NV", GL_MINUS_CLAMPED_NV},
        {"GL_MINUS_NV", GL_MINUS_NV},
        {"GL_MULTIPLY_NV", GL_MULTIPLY_NV},
        {"GL_OVERLAY_NV", GL_OVERLAY_NV},
        {"GL_PINLIGHT_NV", GL_PINLIGHT_NV},
        {"GL_PLUS_CLAMPED_ALPHA_NV", GL_PLUS_CLAMPED_ALPHA_NV},
        {"GL_PLUS_CLAMPED_NV", GL_PLUS_CLAMPED_NV},
        {"GL_PLUS_DARKER_NV", GL_PLUS_DARKER_NV},
        {"GL_PLUS_NV", GL_PLUS_NV},
        {"GL_RED_NV", GL_RED_NV},
        {"GL_SCREEN_NV", GL_SCREEN_NV},
        {"GL_SOFTLIGHT_NV", GL_SOFTLIGHT_NV},
        {"GL_SRC_ATOP_NV", GL_SRC_ATOP_NV},
        {"GL_SRC_IN_NV", GL_SRC_IN_NV},
        {"GL_SRC_NV", GL_SRC_NV},
        {"GL_SRC_OUT_NV", GL_SRC_OUT_NV},
        {"GL_SRC_OVER_NV", GL_SRC_OVER_NV},
        {"GL_UNCORRELATED_NV", GL_UNCORRELATED_NV},
        {"GL_VIVIDLIGHT_NV", GL_VIVIDLIGHT_NV},
        {"GL_XOR_NV", GL_XOR_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_blend_equation_advanced */
#endif /* _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_H_ */

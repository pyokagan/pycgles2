#ifndef _PYCGLES2_GL_EXT_PVRTC_SRGB_H_
#define _PYCGLES2_GL_EXT_PVRTC_SRGB_H_
#ifdef GL_EXT_pvrtc_sRGB
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_pvrtc_sRGB(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT", GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT},
        {"GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT", GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT},
        {"GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT", GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT},
        {"GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT", GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT},
        {"GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG", GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG},
        {"GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG", GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_pvrtc_sRGB */
#endif /* _PYCGLES2_GL_EXT_PVRTC_SRGB_H_ */

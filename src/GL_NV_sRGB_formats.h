#ifndef _PYCGLES2_GL_NV_SRGB_FORMATS_H_
#define _PYCGLES2_GL_NV_SRGB_FORMATS_H_
#ifdef GL_NV_sRGB_formats
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_sRGB_formats(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_SLUMINANCE_NV", GL_SLUMINANCE_NV},
        {"GL_SLUMINANCE_ALPHA_NV", GL_SLUMINANCE_ALPHA_NV},
        {"GL_SRGB8_NV", GL_SRGB8_NV},
        {"GL_SLUMINANCE8_NV", GL_SLUMINANCE8_NV},
        {"GL_SLUMINANCE8_ALPHA8_NV", GL_SLUMINANCE8_ALPHA8_NV},
        {"GL_COMPRESSED_SRGB_S3TC_DXT1_NV", GL_COMPRESSED_SRGB_S3TC_DXT1_NV},
        {"GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV", GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV},
        {"GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV", GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV},
        {"GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV", GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV},
        {"GL_ETC1_SRGB8_NV", GL_ETC1_SRGB8_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_sRGB_formats */
#endif /* _PYCGLES2_GL_NV_SRGB_FORMATS_H_ */

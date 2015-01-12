#ifndef _PYCGLES2_GL_EXT_TEXTURE_SRGB_DECODE_H_
#define _PYCGLES2_GL_EXT_TEXTURE_SRGB_DECODE_H_
#ifdef GL_EXT_texture_sRGB_decode
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_sRGB_decode(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_SRGB_DECODE_EXT", GL_TEXTURE_SRGB_DECODE_EXT},
        {"GL_DECODE_EXT", GL_DECODE_EXT},
        {"GL_SKIP_DECODE_EXT", GL_SKIP_DECODE_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_sRGB_decode */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_SRGB_DECODE_H_ */

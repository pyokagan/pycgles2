#ifndef _PYCGLES2_GL_EXT_SRGB_H_
#define _PYCGLES2_GL_EXT_SRGB_H_
#ifdef GL_EXT_sRGB
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_sRGB(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_SRGB_EXT", GL_SRGB_EXT},
        {"GL_SRGB_ALPHA_EXT", GL_SRGB_ALPHA_EXT},
        {"GL_SRGB8_ALPHA8_EXT", GL_SRGB8_ALPHA8_EXT},
        {"GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT", GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_sRGB */
#endif /* _PYCGLES2_GL_EXT_SRGB_H_ */

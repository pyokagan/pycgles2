#ifndef _PYCGLES2_GL_OES_REQUIRED_INTERNALFORMAT_H_
#define _PYCGLES2_GL_OES_REQUIRED_INTERNALFORMAT_H_
#ifdef GL_OES_required_internalformat
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_required_internalformat(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_ALPHA8_OES", GL_ALPHA8_OES},
        {"GL_DEPTH_COMPONENT16_OES", GL_DEPTH_COMPONENT16_OES},
        {"GL_LUMINANCE4_ALPHA4_OES", GL_LUMINANCE4_ALPHA4_OES},
        {"GL_LUMINANCE8_ALPHA8_OES", GL_LUMINANCE8_ALPHA8_OES},
        {"GL_LUMINANCE8_OES", GL_LUMINANCE8_OES},
        {"GL_RGBA4_OES", GL_RGBA4_OES},
        {"GL_RGB5_A1_OES", GL_RGB5_A1_OES},
        {"GL_RGB565_OES", GL_RGB565_OES},
        {"GL_RGB8_OES", GL_RGB8_OES},
        {"GL_RGBA8_OES", GL_RGBA8_OES},
        {"GL_RGB10_EXT", GL_RGB10_EXT},
        {"GL_RGB10_A2_EXT", GL_RGB10_A2_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_required_internalformat */
#endif /* _PYCGLES2_GL_OES_REQUIRED_INTERNALFORMAT_H_ */

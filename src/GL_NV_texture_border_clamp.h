#ifndef _PYCGLES2_GL_NV_TEXTURE_BORDER_CLAMP_H_
#define _PYCGLES2_GL_NV_TEXTURE_BORDER_CLAMP_H_
#ifdef GL_NV_texture_border_clamp
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_texture_border_clamp(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_BORDER_COLOR_NV", GL_TEXTURE_BORDER_COLOR_NV},
        {"GL_CLAMP_TO_BORDER_NV", GL_CLAMP_TO_BORDER_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_texture_border_clamp */
#endif /* _PYCGLES2_GL_NV_TEXTURE_BORDER_CLAMP_H_ */

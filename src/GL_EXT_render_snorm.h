#ifndef _PYCGLES2_GL_EXT_RENDER_SNORM_H_
#define _PYCGLES2_GL_EXT_RENDER_SNORM_H_
#ifdef GL_EXT_render_snorm
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_render_snorm(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_R16_SNORM_EXT", GL_R16_SNORM_EXT},
        {"GL_RG16_SNORM_EXT", GL_RG16_SNORM_EXT},
        {"GL_RGBA16_SNORM_EXT", GL_RGBA16_SNORM_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_render_snorm */
#endif /* _PYCGLES2_GL_EXT_RENDER_SNORM_H_ */

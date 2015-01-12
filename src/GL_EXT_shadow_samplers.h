#ifndef _PYCGLES2_GL_EXT_SHADOW_SAMPLERS_H_
#define _PYCGLES2_GL_EXT_SHADOW_SAMPLERS_H_
#ifdef GL_EXT_shadow_samplers
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_shadow_samplers(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_COMPARE_MODE_EXT", GL_TEXTURE_COMPARE_MODE_EXT},
        {"GL_TEXTURE_COMPARE_FUNC_EXT", GL_TEXTURE_COMPARE_FUNC_EXT},
        {"GL_COMPARE_REF_TO_TEXTURE_EXT", GL_COMPARE_REF_TO_TEXTURE_EXT},
        {"GL_SAMPLER_2D_SHADOW_EXT", GL_SAMPLER_2D_SHADOW_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_shadow_samplers */
#endif /* _PYCGLES2_GL_EXT_SHADOW_SAMPLERS_H_ */

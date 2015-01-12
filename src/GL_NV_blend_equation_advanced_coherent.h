#ifndef _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_COHERENT_H_
#define _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_COHERENT_H_
#ifdef GL_NV_blend_equation_advanced_coherent
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_blend_equation_advanced_coherent(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_BLEND_ADVANCED_COHERENT_NV", GL_BLEND_ADVANCED_COHERENT_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_blend_equation_advanced_coherent */
#endif /* _PYCGLES2_GL_NV_BLEND_EQUATION_ADVANCED_COHERENT_H_ */

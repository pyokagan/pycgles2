#ifndef _PYCGLES2_GL_OES_SHADER_MULTISAMPLE_INTERPOLATION_H_
#define _PYCGLES2_GL_OES_SHADER_MULTISAMPLE_INTERPOLATION_H_
#ifdef GL_OES_shader_multisample_interpolation
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_shader_multisample_interpolation(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES", GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES},
        {"GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES", GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES},
        {"GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES", GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_shader_multisample_interpolation */
#endif /* _PYCGLES2_GL_OES_SHADER_MULTISAMPLE_INTERPOLATION_H_ */

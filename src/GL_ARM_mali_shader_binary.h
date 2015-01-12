#ifndef _PYCGLES2_GL_ARM_MALI_SHADER_BINARY_H_
#define _PYCGLES2_GL_ARM_MALI_SHADER_BINARY_H_
#ifdef GL_ARM_mali_shader_binary
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_ARM_mali_shader_binary(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MALI_SHADER_BINARY_ARM", GL_MALI_SHADER_BINARY_ARM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ARM_mali_shader_binary */
#endif /* _PYCGLES2_GL_ARM_MALI_SHADER_BINARY_H_ */

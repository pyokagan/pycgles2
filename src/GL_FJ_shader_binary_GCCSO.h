#ifndef _PYCGLES2_GL_FJ_SHADER_BINARY_GCCSO_H_
#define _PYCGLES2_GL_FJ_SHADER_BINARY_GCCSO_H_
#ifdef GL_FJ_shader_binary_GCCSO
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_FJ_shader_binary_GCCSO(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_GCCSO_SHADER_BINARY_FJ", GL_GCCSO_SHADER_BINARY_FJ},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_FJ_shader_binary_GCCSO */
#endif /* _PYCGLES2_GL_FJ_SHADER_BINARY_GCCSO_H_ */

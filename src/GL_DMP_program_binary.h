#ifndef _PYCGLES2_GL_DMP_PROGRAM_BINARY_H_
#define _PYCGLES2_GL_DMP_PROGRAM_BINARY_H_
#ifdef GL_DMP_program_binary
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_DMP_program_binary(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_SMAPHS30_PROGRAM_BINARY_DMP", GL_SMAPHS30_PROGRAM_BINARY_DMP},
        {"GL_SMAPHS_PROGRAM_BINARY_DMP", GL_SMAPHS_PROGRAM_BINARY_DMP},
        {"GL_DMP_PROGRAM_BINARY_DMP", GL_DMP_PROGRAM_BINARY_DMP},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_DMP_program_binary */
#endif /* _PYCGLES2_GL_DMP_PROGRAM_BINARY_H_ */

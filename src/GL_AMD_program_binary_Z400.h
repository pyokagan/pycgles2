#ifndef _PYCGLES2_GL_AMD_PROGRAM_BINARY_Z400_H_
#define _PYCGLES2_GL_AMD_PROGRAM_BINARY_Z400_H_
#ifdef GL_AMD_program_binary_Z400
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_AMD_program_binary_Z400(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_Z400_BINARY_AMD", GL_Z400_BINARY_AMD},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_AMD_program_binary_Z400 */
#endif /* _PYCGLES2_GL_AMD_PROGRAM_BINARY_Z400_H_ */

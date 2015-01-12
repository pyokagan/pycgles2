#ifndef _PYCGLES2_GL_NV_DEPTH_NONLINEAR_H_
#define _PYCGLES2_GL_NV_DEPTH_NONLINEAR_H_
#ifdef GL_NV_depth_nonlinear
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_depth_nonlinear(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_DEPTH_COMPONENT16_NONLINEAR_NV", GL_DEPTH_COMPONENT16_NONLINEAR_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_depth_nonlinear */
#endif /* _PYCGLES2_GL_NV_DEPTH_NONLINEAR_H_ */

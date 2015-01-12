#ifndef _PYCGLES2_GL_OES_PACKED_DEPTH_STENCIL_H_
#define _PYCGLES2_GL_OES_PACKED_DEPTH_STENCIL_H_
#ifdef GL_OES_packed_depth_stencil
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_packed_depth_stencil(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_DEPTH_STENCIL_OES", GL_DEPTH_STENCIL_OES},
        {"GL_UNSIGNED_INT_24_8_OES", GL_UNSIGNED_INT_24_8_OES},
        {"GL_DEPTH24_STENCIL8_OES", GL_DEPTH24_STENCIL8_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_packed_depth_stencil */
#endif /* _PYCGLES2_GL_OES_PACKED_DEPTH_STENCIL_H_ */

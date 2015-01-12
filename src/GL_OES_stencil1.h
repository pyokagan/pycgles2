#ifndef _PYCGLES2_GL_OES_STENCIL1_H_
#define _PYCGLES2_GL_OES_STENCIL1_H_
#ifdef GL_OES_stencil1
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_stencil1(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_STENCIL_INDEX1_OES", GL_STENCIL_INDEX1_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_stencil1 */
#endif /* _PYCGLES2_GL_OES_STENCIL1_H_ */

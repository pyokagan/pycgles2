#ifndef _PYCGLES2_GL_OES_DEPTH32_H_
#define _PYCGLES2_GL_OES_DEPTH32_H_
#ifdef GL_OES_depth32
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_depth32(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_DEPTH_COMPONENT32_OES", GL_DEPTH_COMPONENT32_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_depth32 */
#endif /* _PYCGLES2_GL_OES_DEPTH32_H_ */

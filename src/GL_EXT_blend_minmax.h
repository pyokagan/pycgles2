#ifndef _PYCGLES2_GL_EXT_BLEND_MINMAX_H_
#define _PYCGLES2_GL_EXT_BLEND_MINMAX_H_
#ifdef GL_EXT_blend_minmax
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_blend_minmax(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MIN_EXT", GL_MIN_EXT},
        {"GL_MAX_EXT", GL_MAX_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_blend_minmax */
#endif /* _PYCGLES2_GL_EXT_BLEND_MINMAX_H_ */

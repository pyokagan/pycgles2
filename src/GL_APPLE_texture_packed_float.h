#ifndef _PYCGLES2_GL_APPLE_TEXTURE_PACKED_FLOAT_H_
#define _PYCGLES2_GL_APPLE_TEXTURE_PACKED_FLOAT_H_
#ifdef GL_APPLE_texture_packed_float
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_APPLE_texture_packed_float(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE", GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE},
        {"GL_UNSIGNED_INT_5_9_9_9_REV_APPLE", GL_UNSIGNED_INT_5_9_9_9_REV_APPLE},
        {"GL_R11F_G11F_B10F_APPLE", GL_R11F_G11F_B10F_APPLE},
        {"GL_RGB9_E5_APPLE", GL_RGB9_E5_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_texture_packed_float */
#endif /* _PYCGLES2_GL_APPLE_TEXTURE_PACKED_FLOAT_H_ */

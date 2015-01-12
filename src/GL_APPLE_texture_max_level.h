#ifndef _PYCGLES2_GL_APPLE_TEXTURE_MAX_LEVEL_H_
#define _PYCGLES2_GL_APPLE_TEXTURE_MAX_LEVEL_H_
#ifdef GL_APPLE_texture_max_level
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_APPLE_texture_max_level(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_MAX_LEVEL_APPLE", GL_TEXTURE_MAX_LEVEL_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_texture_max_level */
#endif /* _PYCGLES2_GL_APPLE_TEXTURE_MAX_LEVEL_H_ */

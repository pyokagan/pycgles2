#ifndef _PYCGLES2_GL_EXT_TEXTURE_RG_H_
#define _PYCGLES2_GL_EXT_TEXTURE_RG_H_
#ifdef GL_EXT_texture_rg
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_rg(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RED_EXT", GL_RED_EXT},
        {"GL_RG_EXT", GL_RG_EXT},
        {"GL_R8_EXT", GL_R8_EXT},
        {"GL_RG8_EXT", GL_RG8_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_rg */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_RG_H_ */

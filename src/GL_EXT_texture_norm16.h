#ifndef _PYCGLES2_GL_EXT_TEXTURE_NORM16_H_
#define _PYCGLES2_GL_EXT_TEXTURE_NORM16_H_
#ifdef GL_EXT_texture_norm16
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_norm16(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_R16_EXT", GL_R16_EXT},
        {"GL_RG16_EXT", GL_RG16_EXT},
        {"GL_RGBA16_EXT", GL_RGBA16_EXT},
        {"GL_RGB16_EXT", GL_RGB16_EXT},
        {"GL_RGB16_SNORM_EXT", GL_RGB16_SNORM_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_norm16 */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_NORM16_H_ */

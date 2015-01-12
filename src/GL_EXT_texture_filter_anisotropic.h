#ifndef _PYCGLES2_GL_EXT_TEXTURE_FILTER_ANISOTROPIC_H_
#define _PYCGLES2_GL_EXT_TEXTURE_FILTER_ANISOTROPIC_H_
#ifdef GL_EXT_texture_filter_anisotropic
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_filter_anisotropic(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_MAX_ANISOTROPY_EXT", GL_TEXTURE_MAX_ANISOTROPY_EXT},
        {"GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT", GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_filter_anisotropic */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_FILTER_ANISOTROPIC_H_ */

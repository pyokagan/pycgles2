#ifndef _PYCGLES2_GL_AMD_COMPRESSED_ATC_TEXTURE_H_
#define _PYCGLES2_GL_AMD_COMPRESSED_ATC_TEXTURE_H_
#ifdef GL_AMD_compressed_ATC_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_AMD_compressed_ATC_texture(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_ATC_RGB_AMD", GL_ATC_RGB_AMD},
        {"GL_ATC_RGBA_EXPLICIT_ALPHA_AMD", GL_ATC_RGBA_EXPLICIT_ALPHA_AMD},
        {"GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD", GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_AMD_compressed_ATC_texture */
#endif /* _PYCGLES2_GL_AMD_COMPRESSED_ATC_TEXTURE_H_ */

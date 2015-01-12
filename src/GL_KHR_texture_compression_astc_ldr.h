#ifndef _PYCGLES2_GL_KHR_TEXTURE_COMPRESSION_ASTC_LDR_H_
#define _PYCGLES2_GL_KHR_TEXTURE_COMPRESSION_ASTC_LDR_H_
#ifdef GL_KHR_texture_compression_astc_ldr
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_KHR_texture_compression_astc_ldr(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_KHR_texture_compression_astc_ldr */
#endif /* _PYCGLES2_GL_KHR_TEXTURE_COMPRESSION_ASTC_LDR_H_ */

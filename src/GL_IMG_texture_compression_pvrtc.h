#ifndef _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC_H_
#define _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC_H_
#ifdef GL_IMG_texture_compression_pvrtc
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_IMG_texture_compression_pvrtc(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG", GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG},
        {"GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG", GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG},
        {"GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG", GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG},
        {"GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG", GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_IMG_texture_compression_pvrtc */
#endif /* _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC_H_ */

#ifndef _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC2_H_
#define _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC2_H_
#ifdef GL_IMG_texture_compression_pvrtc2
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_IMG_texture_compression_pvrtc2(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG", GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG},
        {"GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG", GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_IMG_texture_compression_pvrtc2 */
#endif /* _PYCGLES2_GL_IMG_TEXTURE_COMPRESSION_PVRTC2_H_ */

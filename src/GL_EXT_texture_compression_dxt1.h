#ifndef _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_DXT1_H_
#define _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_DXT1_H_
#ifdef GL_EXT_texture_compression_dxt1
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_compression_dxt1(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_RGB_S3TC_DXT1_EXT", GL_COMPRESSED_RGB_S3TC_DXT1_EXT},
        {"GL_COMPRESSED_RGBA_S3TC_DXT1_EXT", GL_COMPRESSED_RGBA_S3TC_DXT1_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_compression_dxt1 */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_DXT1_H_ */

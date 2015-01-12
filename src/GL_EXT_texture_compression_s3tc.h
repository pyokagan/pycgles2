#ifndef _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_S3TC_H_
#define _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_S3TC_H_
#ifdef GL_EXT_texture_compression_s3tc
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_compression_s3tc(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_RGBA_S3TC_DXT3_EXT", GL_COMPRESSED_RGBA_S3TC_DXT3_EXT},
        {"GL_COMPRESSED_RGBA_S3TC_DXT5_EXT", GL_COMPRESSED_RGBA_S3TC_DXT5_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_compression_s3tc */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_COMPRESSION_S3TC_H_ */

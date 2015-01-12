#ifndef _PYCGLES2_GL_ANGLE_TEXTURE_COMPRESSION_DXT5_H_
#define _PYCGLES2_GL_ANGLE_TEXTURE_COMPRESSION_DXT5_H_
#ifdef GL_ANGLE_texture_compression_dxt5
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_ANGLE_texture_compression_dxt5(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE", GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_texture_compression_dxt5 */
#endif /* _PYCGLES2_GL_ANGLE_TEXTURE_COMPRESSION_DXT5_H_ */

#ifndef _PYCGLES2_GL_NV_TEXTURE_COMPRESSION_S3TC_UPDATE_H_
#define _PYCGLES2_GL_NV_TEXTURE_COMPRESSION_S3TC_UPDATE_H_
#ifdef GL_NV_texture_compression_s3tc_update
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_texture_compression_s3tc_update(PyObject *m)
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


#endif /* GL_NV_texture_compression_s3tc_update */
#endif /* _PYCGLES2_GL_NV_TEXTURE_COMPRESSION_S3TC_UPDATE_H_ */

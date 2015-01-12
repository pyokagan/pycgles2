#ifndef _PYCGLES2_GL_EXT_SHADER_PIXEL_LOCAL_STORAGE_H_
#define _PYCGLES2_GL_EXT_SHADER_PIXEL_LOCAL_STORAGE_H_
#ifdef GL_EXT_shader_pixel_local_storage
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_shader_pixel_local_storage(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT", GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT},
        {"GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT", GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT},
        {"GL_SHADER_PIXEL_LOCAL_STORAGE_EXT", GL_SHADER_PIXEL_LOCAL_STORAGE_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_shader_pixel_local_storage */
#endif /* _PYCGLES2_GL_EXT_SHADER_PIXEL_LOCAL_STORAGE_H_ */

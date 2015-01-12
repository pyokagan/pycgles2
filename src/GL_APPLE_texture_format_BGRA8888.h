#ifndef _PYCGLES2_GL_APPLE_TEXTURE_FORMAT_BGRA8888_H_
#define _PYCGLES2_GL_APPLE_TEXTURE_FORMAT_BGRA8888_H_
#ifdef GL_APPLE_texture_format_BGRA8888
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_APPLE_texture_format_BGRA8888(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_BGRA_EXT", GL_BGRA_EXT},
        {"GL_BGRA8_EXT", GL_BGRA8_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_texture_format_BGRA8888 */
#endif /* _PYCGLES2_GL_APPLE_TEXTURE_FORMAT_BGRA8888_H_ */

#ifndef _PYCGLES2_GL_EXT_COLOR_BUFFER_HALF_FLOAT_H_
#define _PYCGLES2_GL_EXT_COLOR_BUFFER_HALF_FLOAT_H_
#ifdef GL_EXT_color_buffer_half_float
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_color_buffer_half_float(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RGBA16F_EXT", GL_RGBA16F_EXT},
        {"GL_RGB16F_EXT", GL_RGB16F_EXT},
        {"GL_RG16F_EXT", GL_RG16F_EXT},
        {"GL_R16F_EXT", GL_R16F_EXT},
        {"GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT", GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT},
        {"GL_UNSIGNED_NORMALIZED_EXT", GL_UNSIGNED_NORMALIZED_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_color_buffer_half_float */
#endif /* _PYCGLES2_GL_EXT_COLOR_BUFFER_HALF_FLOAT_H_ */

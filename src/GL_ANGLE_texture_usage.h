#ifndef _PYCGLES2_GL_ANGLE_TEXTURE_USAGE_H_
#define _PYCGLES2_GL_ANGLE_TEXTURE_USAGE_H_
#ifdef GL_ANGLE_texture_usage
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_ANGLE_texture_usage(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_USAGE_ANGLE", GL_TEXTURE_USAGE_ANGLE},
        {"GL_FRAMEBUFFER_ATTACHMENT_ANGLE", GL_FRAMEBUFFER_ATTACHMENT_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_texture_usage */
#endif /* _PYCGLES2_GL_ANGLE_TEXTURE_USAGE_H_ */

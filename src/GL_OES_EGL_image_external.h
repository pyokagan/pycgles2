#ifndef _PYCGLES2_GL_OES_EGL_IMAGE_EXTERNAL_H_
#define _PYCGLES2_GL_OES_EGL_IMAGE_EXTERNAL_H_
#ifdef GL_OES_EGL_image_external
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_EGL_image_external(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_EXTERNAL_OES", GL_TEXTURE_EXTERNAL_OES},
        {"GL_TEXTURE_BINDING_EXTERNAL_OES", GL_TEXTURE_BINDING_EXTERNAL_OES},
        {"GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES", GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES},
        {"GL_SAMPLER_EXTERNAL_OES", GL_SAMPLER_EXTERNAL_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_EGL_image_external */
#endif /* _PYCGLES2_GL_OES_EGL_IMAGE_EXTERNAL_H_ */

#ifndef _PYCGLES2_GL_ARM_SHADER_FRAMEBUFFER_FETCH_H_
#define _PYCGLES2_GL_ARM_SHADER_FRAMEBUFFER_FETCH_H_
#ifdef GL_ARM_shader_framebuffer_fetch
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_ARM_shader_framebuffer_fetch(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_FETCH_PER_SAMPLE_ARM", GL_FETCH_PER_SAMPLE_ARM},
        {"GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM", GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ARM_shader_framebuffer_fetch */
#endif /* _PYCGLES2_GL_ARM_SHADER_FRAMEBUFFER_FETCH_H_ */

#ifndef _PYCGLES2_GL_OES_SURFACELESS_CONTEXT_H_
#define _PYCGLES2_GL_OES_SURFACELESS_CONTEXT_H_
#ifdef GL_OES_surfaceless_context
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_surfaceless_context(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_FRAMEBUFFER_UNDEFINED_OES", GL_FRAMEBUFFER_UNDEFINED_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_surfaceless_context */
#endif /* _PYCGLES2_GL_OES_SURFACELESS_CONTEXT_H_ */

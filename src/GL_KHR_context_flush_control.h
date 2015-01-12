#ifndef _PYCGLES2_GL_KHR_CONTEXT_FLUSH_CONTROL_H_
#define _PYCGLES2_GL_KHR_CONTEXT_FLUSH_CONTROL_H_
#ifdef GL_KHR_context_flush_control
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_KHR_context_flush_control(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_CONTEXT_RELEASE_BEHAVIOR_KHR", GL_CONTEXT_RELEASE_BEHAVIOR_KHR},
        {"GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR", GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_KHR_context_flush_control */
#endif /* _PYCGLES2_GL_KHR_CONTEXT_FLUSH_CONTROL_H_ */

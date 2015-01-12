#ifndef _PYCGLES2_GL_QCOM_WRITEONLY_RENDERING_H_
#define _PYCGLES2_GL_QCOM_WRITEONLY_RENDERING_H_
#ifdef GL_QCOM_writeonly_rendering
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_QCOM_writeonly_rendering(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_WRITEONLY_RENDERING_QCOM", GL_WRITEONLY_RENDERING_QCOM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_writeonly_rendering */
#endif /* _PYCGLES2_GL_QCOM_WRITEONLY_RENDERING_H_ */

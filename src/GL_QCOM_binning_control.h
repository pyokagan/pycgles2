#ifndef _PYCGLES2_GL_QCOM_BINNING_CONTROL_H_
#define _PYCGLES2_GL_QCOM_BINNING_CONTROL_H_
#ifdef GL_QCOM_binning_control
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_QCOM_binning_control(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_BINNING_CONTROL_HINT_QCOM", GL_BINNING_CONTROL_HINT_QCOM},
        {"GL_CPU_OPTIMIZED_QCOM", GL_CPU_OPTIMIZED_QCOM},
        {"GL_GPU_OPTIMIZED_QCOM", GL_GPU_OPTIMIZED_QCOM},
        {"GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM", GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_binning_control */
#endif /* _PYCGLES2_GL_QCOM_BINNING_CONTROL_H_ */

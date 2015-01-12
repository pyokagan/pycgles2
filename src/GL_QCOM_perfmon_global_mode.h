#ifndef _PYCGLES2_GL_QCOM_PERFMON_GLOBAL_MODE_H_
#define _PYCGLES2_GL_QCOM_PERFMON_GLOBAL_MODE_H_
#ifdef GL_QCOM_perfmon_global_mode
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_QCOM_perfmon_global_mode(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PERFMON_GLOBAL_MODE_QCOM", GL_PERFMON_GLOBAL_MODE_QCOM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_perfmon_global_mode */
#endif /* _PYCGLES2_GL_QCOM_PERFMON_GLOBAL_MODE_H_ */

#ifndef _PYCGLES2_GL_QCOM_ALPHA_TEST_H_
#define _PYCGLES2_GL_QCOM_ALPHA_TEST_H_
#ifdef GL_QCOM_alpha_test
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glAlphaFuncQCOM */
static PyObject *
PyCGLES2_glAlphaFuncQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glAlphaFuncQCOM (GLenum func, GLclampf ref) */
    PyErr_SetString(PyExc_NotImplementedError, "glAlphaFuncQCOM");
    return NULL;
}


static int
PyCGLES2_GL_QCOM_alpha_test(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_ALPHA_TEST_QCOM", GL_ALPHA_TEST_QCOM},
        {"GL_ALPHA_TEST_FUNC_QCOM", GL_ALPHA_TEST_FUNC_QCOM},
        {"GL_ALPHA_TEST_REF_QCOM", GL_ALPHA_TEST_REF_QCOM},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_alpha_test */
#endif /* _PYCGLES2_GL_QCOM_ALPHA_TEST_H_ */

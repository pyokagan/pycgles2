#ifndef _PYCGLES2_GL_QCOM_DRIVER_CONTROL_H_
#define _PYCGLES2_GL_QCOM_DRIVER_CONTROL_H_
#ifdef GL_QCOM_driver_control
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetDriverControlsQCOM */
static PyObject *
PyCGLES2_glGetDriverControlsQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetDriverControlsQCOM (GLint *num, GLsizei size, GLuint *driverControls) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetDriverControlsQCOM");
    return NULL;
}


/* TODO(NotImplemented): glGetDriverControlStringQCOM */
static PyObject *
PyCGLES2_glGetDriverControlStringQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei *length, GLchar *driverControlString) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetDriverControlStringQCOM");
    return NULL;
}


/* TODO(NotImplemented): glEnableDriverControlQCOM */
static PyObject *
PyCGLES2_glEnableDriverControlQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEnableDriverControlQCOM (GLuint driverControl) */
    PyErr_SetString(PyExc_NotImplementedError, "glEnableDriverControlQCOM");
    return NULL;
}


/* TODO(NotImplemented): glDisableDriverControlQCOM */
static PyObject *
PyCGLES2_glDisableDriverControlQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDisableDriverControlQCOM (GLuint driverControl) */
    PyErr_SetString(PyExc_NotImplementedError, "glDisableDriverControlQCOM");
    return NULL;
}


static int
PyCGLES2_GL_QCOM_driver_control(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_QCOM_driver_control */
#endif /* _PYCGLES2_GL_QCOM_DRIVER_CONTROL_H_ */

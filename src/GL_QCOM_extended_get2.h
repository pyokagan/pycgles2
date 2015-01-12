#ifndef _PYCGLES2_GL_QCOM_EXTENDED_GET2_H_
#define _PYCGLES2_GL_QCOM_EXTENDED_GET2_H_
#ifdef GL_QCOM_extended_get2
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glExtGetShadersQCOM */
static PyObject *
PyCGLES2_glExtGetShadersQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetShadersQCOM (GLuint *shaders, GLint maxShaders, GLint *numShaders) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetShadersQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetProgramsQCOM */
static PyObject *
PyCGLES2_glExtGetProgramsQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetProgramsQCOM (GLuint *programs, GLint maxPrograms, GLint *numPrograms) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetProgramsQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtIsProgramBinaryQCOM */
static PyObject *
PyCGLES2_glExtIsProgramBinaryQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glExtIsProgramBinaryQCOM (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtIsProgramBinaryQCOM");
    return NULL;
}


/* TODO(NotImplemented): glExtGetProgramBinarySourceQCOM */
static PyObject *
PyCGLES2_glExtGetProgramBinarySourceQCOM(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, GLchar *source, GLint *length) */
    PyErr_SetString(PyExc_NotImplementedError, "glExtGetProgramBinarySourceQCOM");
    return NULL;
}


static int
PyCGLES2_GL_QCOM_extended_get2(PyObject *m)
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


#endif /* GL_QCOM_extended_get2 */
#endif /* _PYCGLES2_GL_QCOM_EXTENDED_GET2_H_ */

#ifndef _PYCGLES2_GL_KHR_ROBUSTNESS_H_
#define _PYCGLES2_GL_KHR_ROBUSTNESS_H_
#ifdef GL_KHR_robustness
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetGraphicsResetStatusKHR */
static PyObject *
PyCGLES2_glGetGraphicsResetStatusKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glGetGraphicsResetStatusKHR () */
    PyErr_SetString(PyExc_NotImplementedError, "glGetGraphicsResetStatusKHR");
    return NULL;
}


/* TODO(NotImplemented): glReadnPixelsKHR */
static PyObject *
PyCGLES2_glReadnPixelsKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadnPixelsKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetnUniformfvKHR */
static PyObject *
PyCGLES2_glGetnUniformfvKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetnUniformfvKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetnUniformivKHR */
static PyObject *
PyCGLES2_glGetnUniformivKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetnUniformivKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetnUniformuivKHR */
static PyObject *
PyCGLES2_glGetnUniformuivKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetnUniformuivKHR");
    return NULL;
}


static int
PyCGLES2_GL_KHR_robustness(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_CONTEXT_ROBUST_ACCESS_KHR", GL_CONTEXT_ROBUST_ACCESS_KHR},
        {"GL_LOSE_CONTEXT_ON_RESET_KHR", GL_LOSE_CONTEXT_ON_RESET_KHR},
        {"GL_GUILTY_CONTEXT_RESET_KHR", GL_GUILTY_CONTEXT_RESET_KHR},
        {"GL_INNOCENT_CONTEXT_RESET_KHR", GL_INNOCENT_CONTEXT_RESET_KHR},
        {"GL_UNKNOWN_CONTEXT_RESET_KHR", GL_UNKNOWN_CONTEXT_RESET_KHR},
        {"GL_RESET_NOTIFICATION_STRATEGY_KHR", GL_RESET_NOTIFICATION_STRATEGY_KHR},
        {"GL_NO_RESET_NOTIFICATION_KHR", GL_NO_RESET_NOTIFICATION_KHR},
        {"GL_CONTEXT_LOST_KHR", GL_CONTEXT_LOST_KHR},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_KHR_robustness */
#endif /* _PYCGLES2_GL_KHR_ROBUSTNESS_H_ */

#ifndef _PYCGLES2_GL_EXT_ROBUSTNESS_H_
#define _PYCGLES2_GL_EXT_ROBUSTNESS_H_
#ifdef GL_EXT_robustness
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetGraphicsResetStatusEXT */
static PyObject *
PyCGLES2_glGetGraphicsResetStatusEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glGetGraphicsResetStatusEXT () */
    PyErr_SetString(PyExc_NotImplementedError, "glGetGraphicsResetStatusEXT");
    return NULL;
}


/* TODO(NotImplemented): glReadnPixelsEXT */
static PyObject *
PyCGLES2_glReadnPixelsEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadnPixelsEXT (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadnPixelsEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetnUniformfvEXT */
static PyObject *
PyCGLES2_glGetnUniformfvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetnUniformfvEXT (GLuint program, GLint location, GLsizei bufSize, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetnUniformfvEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetnUniformivEXT */
static PyObject *
PyCGLES2_glGetnUniformivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetnUniformivEXT (GLuint program, GLint location, GLsizei bufSize, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetnUniformivEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_robustness(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_GUILTY_CONTEXT_RESET_EXT", GL_GUILTY_CONTEXT_RESET_EXT},
        {"GL_INNOCENT_CONTEXT_RESET_EXT", GL_INNOCENT_CONTEXT_RESET_EXT},
        {"GL_UNKNOWN_CONTEXT_RESET_EXT", GL_UNKNOWN_CONTEXT_RESET_EXT},
        {"GL_CONTEXT_ROBUST_ACCESS_EXT", GL_CONTEXT_ROBUST_ACCESS_EXT},
        {"GL_RESET_NOTIFICATION_STRATEGY_EXT", GL_RESET_NOTIFICATION_STRATEGY_EXT},
        {"GL_LOSE_CONTEXT_ON_RESET_EXT", GL_LOSE_CONTEXT_ON_RESET_EXT},
        {"GL_NO_RESET_NOTIFICATION_EXT", GL_NO_RESET_NOTIFICATION_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_robustness */
#endif /* _PYCGLES2_GL_EXT_ROBUSTNESS_H_ */

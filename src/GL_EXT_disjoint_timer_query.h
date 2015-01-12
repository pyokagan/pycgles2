#ifndef _PYCGLES2_GL_EXT_DISJOINT_TIMER_QUERY_H_
#define _PYCGLES2_GL_EXT_DISJOINT_TIMER_QUERY_H_
#ifdef GL_EXT_disjoint_timer_query
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGenQueriesEXT */
static PyObject *
PyCGLES2_glGenQueriesEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenQueriesEXT (GLsizei n, GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenQueriesEXT");
    return NULL;
}


/* TODO(NotImplemented): glDeleteQueriesEXT */
static PyObject *
PyCGLES2_glDeleteQueriesEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteQueriesEXT (GLsizei n, const GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteQueriesEXT");
    return NULL;
}


/* TODO(NotImplemented): glIsQueryEXT */
static PyObject *
PyCGLES2_glIsQueryEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsQueryEXT (GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsQueryEXT");
    return NULL;
}


/* TODO(NotImplemented): glBeginQueryEXT */
static PyObject *
PyCGLES2_glBeginQueryEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginQueryEXT (GLenum target, GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginQueryEXT");
    return NULL;
}


/* TODO(NotImplemented): glEndQueryEXT */
static PyObject *
PyCGLES2_glEndQueryEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndQueryEXT (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glEndQueryEXT");
    return NULL;
}


/* TODO(NotImplemented): glQueryCounterEXT */
static PyObject *
PyCGLES2_glQueryCounterEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glQueryCounterEXT (GLuint id, GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glQueryCounterEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryivEXT */
static PyObject *
PyCGLES2_glGetQueryivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryivEXT (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryObjectivEXT */
static PyObject *
PyCGLES2_glGetQueryObjectivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryObjectivEXT (GLuint id, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryObjectivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryObjectuivEXT */
static PyObject *
PyCGLES2_glGetQueryObjectuivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryObjectuivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryObjecti64vEXT */
static PyObject *
PyCGLES2_glGetQueryObjecti64vEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryObjecti64vEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryObjectui64vEXT */
static PyObject *
PyCGLES2_glGetQueryObjectui64vEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryObjectui64vEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_disjoint_timer_query(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_QUERY_COUNTER_BITS_EXT", GL_QUERY_COUNTER_BITS_EXT},
        {"GL_CURRENT_QUERY_EXT", GL_CURRENT_QUERY_EXT},
        {"GL_QUERY_RESULT_EXT", GL_QUERY_RESULT_EXT},
        {"GL_QUERY_RESULT_AVAILABLE_EXT", GL_QUERY_RESULT_AVAILABLE_EXT},
        {"GL_TIME_ELAPSED_EXT", GL_TIME_ELAPSED_EXT},
        {"GL_TIMESTAMP_EXT", GL_TIMESTAMP_EXT},
        {"GL_GPU_DISJOINT_EXT", GL_GPU_DISJOINT_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_disjoint_timer_query */
#endif /* _PYCGLES2_GL_EXT_DISJOINT_TIMER_QUERY_H_ */

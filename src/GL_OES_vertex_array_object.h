#ifndef _PYCGLES2_GL_OES_VERTEX_ARRAY_OBJECT_H_
#define _PYCGLES2_GL_OES_VERTEX_ARRAY_OBJECT_H_
#ifdef GL_OES_vertex_array_object
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBindVertexArrayOES */
static PyObject *
PyCGLES2_glBindVertexArrayOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindVertexArrayOES (GLuint array) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindVertexArrayOES");
    return NULL;
}


/* TODO(NotImplemented): glDeleteVertexArraysOES */
static PyObject *
PyCGLES2_glDeleteVertexArraysOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteVertexArraysOES (GLsizei n, const GLuint *arrays) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteVertexArraysOES");
    return NULL;
}


/* TODO(NotImplemented): glGenVertexArraysOES */
static PyObject *
PyCGLES2_glGenVertexArraysOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenVertexArraysOES (GLsizei n, GLuint *arrays) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenVertexArraysOES");
    return NULL;
}


/* TODO(NotImplemented): glIsVertexArrayOES */
static PyObject *
PyCGLES2_glIsVertexArrayOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsVertexArrayOES (GLuint array) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsVertexArrayOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_vertex_array_object(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_VERTEX_ARRAY_BINDING_OES", GL_VERTEX_ARRAY_BINDING_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_vertex_array_object */
#endif /* _PYCGLES2_GL_OES_VERTEX_ARRAY_OBJECT_H_ */

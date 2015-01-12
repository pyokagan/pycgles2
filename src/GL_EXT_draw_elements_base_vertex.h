#ifndef _PYCGLES2_GL_EXT_DRAW_ELEMENTS_BASE_VERTEX_H_
#define _PYCGLES2_GL_EXT_DRAW_ELEMENTS_BASE_VERTEX_H_
#ifdef GL_EXT_draw_elements_base_vertex
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawElementsBaseVertexEXT */
static PyObject *
PyCGLES2_glDrawElementsBaseVertexEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsBaseVertexEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawRangeElementsBaseVertexEXT */
static PyObject *
PyCGLES2_glDrawRangeElementsBaseVertexEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawRangeElementsBaseVertexEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawRangeElementsBaseVertexEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedBaseVertexEXT */
static PyObject *
PyCGLES2_glDrawElementsInstancedBaseVertexEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedBaseVertexEXT");
    return NULL;
}


/* TODO(NotImplemented): glMultiDrawElementsBaseVertexEXT */
static PyObject *
PyCGLES2_glMultiDrawElementsBaseVertexEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMultiDrawElementsBaseVertexEXT (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex) */
    PyErr_SetString(PyExc_NotImplementedError, "glMultiDrawElementsBaseVertexEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_draw_elements_base_vertex(PyObject *m)
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


#endif /* GL_EXT_draw_elements_base_vertex */
#endif /* _PYCGLES2_GL_EXT_DRAW_ELEMENTS_BASE_VERTEX_H_ */

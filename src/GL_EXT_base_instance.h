#ifndef _PYCGLES2_GL_EXT_BASE_INSTANCE_H_
#define _PYCGLES2_GL_EXT_BASE_INSTANCE_H_
#ifdef GL_EXT_base_instance
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDrawArraysInstancedBaseInstanceEXT */
static PyObject *
PyCGLES2_glDrawArraysInstancedBaseInstanceEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysInstancedBaseInstanceEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedBaseInstanceEXT */
static PyObject *
PyCGLES2_glDrawElementsInstancedBaseInstanceEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedBaseInstanceEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstancedBaseVertexBaseInstanceEXT */
static PyObject *
PyCGLES2_glDrawElementsInstancedBaseVertexBaseInstanceEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstancedBaseVertexBaseInstanceEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_base_instance(PyObject *m)
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


#endif /* GL_EXT_base_instance */
#endif /* _PYCGLES2_GL_EXT_BASE_INSTANCE_H_ */

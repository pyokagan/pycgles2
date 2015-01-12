#ifndef _PYCGLES2_GL_OES_GET_PROGRAM_BINARY_H_
#define _PYCGLES2_GL_OES_GET_PROGRAM_BINARY_H_
#ifdef GL_OES_get_program_binary
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetProgramBinaryOES */
static PyObject *
PyCGLES2_glGetProgramBinaryOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramBinaryOES");
    return NULL;
}


/* TODO(NotImplemented): glProgramBinaryOES */
static PyObject *
PyCGLES2_glProgramBinaryOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void *binary, GLint length) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramBinaryOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_get_program_binary(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PROGRAM_BINARY_LENGTH_OES", GL_PROGRAM_BINARY_LENGTH_OES},
        {"GL_NUM_PROGRAM_BINARY_FORMATS_OES", GL_NUM_PROGRAM_BINARY_FORMATS_OES},
        {"GL_PROGRAM_BINARY_FORMATS_OES", GL_PROGRAM_BINARY_FORMATS_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_get_program_binary */
#endif /* _PYCGLES2_GL_OES_GET_PROGRAM_BINARY_H_ */

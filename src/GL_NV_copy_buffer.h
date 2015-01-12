#ifndef _PYCGLES2_GL_NV_COPY_BUFFER_H_
#define _PYCGLES2_GL_NV_COPY_BUFFER_H_
#ifdef GL_NV_copy_buffer
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glCopyBufferSubDataNV */
static PyObject *
PyCGLES2_glCopyBufferSubDataNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyBufferSubDataNV (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyBufferSubDataNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_copy_buffer(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COPY_READ_BUFFER_NV", GL_COPY_READ_BUFFER_NV},
        {"GL_COPY_WRITE_BUFFER_NV", GL_COPY_WRITE_BUFFER_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_copy_buffer */
#endif /* _PYCGLES2_GL_NV_COPY_BUFFER_H_ */

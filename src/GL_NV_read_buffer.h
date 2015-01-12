#ifndef _PYCGLES2_GL_NV_READ_BUFFER_H_
#define _PYCGLES2_GL_NV_READ_BUFFER_H_
#ifdef GL_NV_read_buffer
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glReadBufferNV */
static PyObject *
PyCGLES2_glReadBufferNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadBufferNV (GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadBufferNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_read_buffer(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_READ_BUFFER_NV", GL_READ_BUFFER_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_read_buffer */
#endif /* _PYCGLES2_GL_NV_READ_BUFFER_H_ */

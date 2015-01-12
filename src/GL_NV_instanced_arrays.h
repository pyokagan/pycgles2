#ifndef _PYCGLES2_GL_NV_INSTANCED_ARRAYS_H_
#define _PYCGLES2_GL_NV_INSTANCED_ARRAYS_H_
#ifdef GL_NV_instanced_arrays
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glVertexAttribDivisorNV */
static PyObject *
PyCGLES2_glVertexAttribDivisorNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribDivisorNV (GLuint index, GLuint divisor) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribDivisorNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_instanced_arrays(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV", GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_instanced_arrays */
#endif /* _PYCGLES2_GL_NV_INSTANCED_ARRAYS_H_ */

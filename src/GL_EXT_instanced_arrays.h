#ifndef _PYCGLES2_GL_EXT_INSTANCED_ARRAYS_H_
#define _PYCGLES2_GL_EXT_INSTANCED_ARRAYS_H_
#ifdef GL_EXT_instanced_arrays
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glVertexAttribDivisorEXT */
static PyObject *
PyCGLES2_glVertexAttribDivisorEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribDivisorEXT (GLuint index, GLuint divisor) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribDivisorEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_instanced_arrays(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT", GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_instanced_arrays */
#endif /* _PYCGLES2_GL_EXT_INSTANCED_ARRAYS_H_ */

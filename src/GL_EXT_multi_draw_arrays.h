#ifndef _PYCGLES2_GL_EXT_MULTI_DRAW_ARRAYS_H_
#define _PYCGLES2_GL_EXT_MULTI_DRAW_ARRAYS_H_
#ifdef GL_EXT_multi_draw_arrays
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glMultiDrawArraysEXT */
static PyObject *
PyCGLES2_glMultiDrawArraysEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMultiDrawArraysEXT (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glMultiDrawArraysEXT");
    return NULL;
}


/* TODO(NotImplemented): glMultiDrawElementsEXT */
static PyObject *
PyCGLES2_glMultiDrawElementsEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMultiDrawElementsEXT (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount) */
    PyErr_SetString(PyExc_NotImplementedError, "glMultiDrawElementsEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_multi_draw_arrays(PyObject *m)
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


#endif /* GL_EXT_multi_draw_arrays */
#endif /* _PYCGLES2_GL_EXT_MULTI_DRAW_ARRAYS_H_ */

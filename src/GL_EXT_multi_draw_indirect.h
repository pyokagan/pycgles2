#ifndef _PYCGLES2_GL_EXT_MULTI_DRAW_INDIRECT_H_
#define _PYCGLES2_GL_EXT_MULTI_DRAW_INDIRECT_H_
#ifdef GL_EXT_multi_draw_indirect
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glMultiDrawArraysIndirectEXT */
static PyObject *
PyCGLES2_glMultiDrawArraysIndirectEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMultiDrawArraysIndirectEXT (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) */
    PyErr_SetString(PyExc_NotImplementedError, "glMultiDrawArraysIndirectEXT");
    return NULL;
}


/* TODO(NotImplemented): glMultiDrawElementsIndirectEXT */
static PyObject *
PyCGLES2_glMultiDrawElementsIndirectEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMultiDrawElementsIndirectEXT (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) */
    PyErr_SetString(PyExc_NotImplementedError, "glMultiDrawElementsIndirectEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_multi_draw_indirect(PyObject *m)
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


#endif /* GL_EXT_multi_draw_indirect */
#endif /* _PYCGLES2_GL_EXT_MULTI_DRAW_INDIRECT_H_ */

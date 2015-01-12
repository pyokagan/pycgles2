#ifndef _PYCGLES2_GL_EXT_DRAW_BUFFERS_INDEXED_H_
#define _PYCGLES2_GL_EXT_DRAW_BUFFERS_INDEXED_H_
#ifdef GL_EXT_draw_buffers_indexed
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glEnableiEXT */
static PyObject *
PyCGLES2_glEnableiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEnableiEXT (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glEnableiEXT");
    return NULL;
}


/* TODO(NotImplemented): glDisableiEXT */
static PyObject *
PyCGLES2_glDisableiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDisableiEXT (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glDisableiEXT");
    return NULL;
}


/* TODO(NotImplemented): glBlendEquationiEXT */
static PyObject *
PyCGLES2_glBlendEquationiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendEquationiEXT (GLuint buf, GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendEquationiEXT");
    return NULL;
}


/* TODO(NotImplemented): glBlendEquationSeparateiEXT */
static PyObject *
PyCGLES2_glBlendEquationSeparateiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendEquationSeparateiEXT (GLuint buf, GLenum modeRGB, GLenum modeAlpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendEquationSeparateiEXT");
    return NULL;
}


/* TODO(NotImplemented): glBlendFunciEXT */
static PyObject *
PyCGLES2_glBlendFunciEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendFunciEXT (GLuint buf, GLenum src, GLenum dst) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendFunciEXT");
    return NULL;
}


/* TODO(NotImplemented): glBlendFuncSeparateiEXT */
static PyObject *
PyCGLES2_glBlendFuncSeparateiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendFuncSeparateiEXT (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendFuncSeparateiEXT");
    return NULL;
}


/* TODO(NotImplemented): glColorMaskiEXT */
static PyObject *
PyCGLES2_glColorMaskiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glColorMaskiEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) */
    PyErr_SetString(PyExc_NotImplementedError, "glColorMaskiEXT");
    return NULL;
}


/* TODO(NotImplemented): glIsEnablediEXT */
static PyObject *
PyCGLES2_glIsEnablediEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsEnablediEXT (GLenum target, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsEnablediEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_draw_buffers_indexed(PyObject *m)
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


#endif /* GL_EXT_draw_buffers_indexed */
#endif /* _PYCGLES2_GL_EXT_DRAW_BUFFERS_INDEXED_H_ */

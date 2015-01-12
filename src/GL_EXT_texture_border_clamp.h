#ifndef _PYCGLES2_GL_EXT_TEXTURE_BORDER_CLAMP_H_
#define _PYCGLES2_GL_EXT_TEXTURE_BORDER_CLAMP_H_
#ifdef GL_EXT_texture_border_clamp
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTexParameterIivEXT */
static PyObject *
PyCGLES2_glTexParameterIivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameterIivEXT (GLenum target, GLenum pname, const GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameterIivEXT");
    return NULL;
}


/* TODO(NotImplemented): glTexParameterIuivEXT */
static PyObject *
PyCGLES2_glTexParameterIuivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameterIuivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetTexParameterIivEXT */
static PyObject *
PyCGLES2_glGetTexParameterIivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexParameterIivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetTexParameterIuivEXT */
static PyObject *
PyCGLES2_glGetTexParameterIuivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexParameterIuivEXT");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameterIivEXT */
static PyObject *
PyCGLES2_glSamplerParameterIivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameterIivEXT (GLuint sampler, GLenum pname, const GLint *param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameterIivEXT");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameterIuivEXT */
static PyObject *
PyCGLES2_glSamplerParameterIuivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameterIuivEXT (GLuint sampler, GLenum pname, const GLuint *param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameterIuivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetSamplerParameterIivEXT */
static PyObject *
PyCGLES2_glGetSamplerParameterIivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSamplerParameterIivEXT (GLuint sampler, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSamplerParameterIivEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetSamplerParameterIuivEXT */
static PyObject *
PyCGLES2_glGetSamplerParameterIuivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSamplerParameterIuivEXT (GLuint sampler, GLenum pname, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSamplerParameterIuivEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_texture_border_clamp(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_BORDER_COLOR_EXT", GL_TEXTURE_BORDER_COLOR_EXT},
        {"GL_CLAMP_TO_BORDER_EXT", GL_CLAMP_TO_BORDER_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_border_clamp */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_BORDER_CLAMP_H_ */

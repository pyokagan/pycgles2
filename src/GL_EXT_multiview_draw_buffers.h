#ifndef _PYCGLES2_GL_EXT_MULTIVIEW_DRAW_BUFFERS_H_
#define _PYCGLES2_GL_EXT_MULTIVIEW_DRAW_BUFFERS_H_
#ifdef GL_EXT_multiview_draw_buffers
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glReadBufferIndexedEXT */
static PyObject *
PyCGLES2_glReadBufferIndexedEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadBufferIndexedEXT (GLenum src, GLint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadBufferIndexedEXT");
    return NULL;
}


/* TODO(NotImplemented): glDrawBuffersIndexedEXT */
static PyObject *
PyCGLES2_glDrawBuffersIndexedEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawBuffersIndexedEXT (GLint n, const GLenum *location, const GLint *indices) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawBuffersIndexedEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetIntegeri_vEXT */
static PyObject *
PyCGLES2_glGetIntegeri_vEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetIntegeri_vEXT (GLenum target, GLuint index, GLint *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetIntegeri_vEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_multiview_draw_buffers(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COLOR_ATTACHMENT_EXT", GL_COLOR_ATTACHMENT_EXT},
        {"GL_MULTIVIEW_EXT", GL_MULTIVIEW_EXT},
        {"GL_DRAW_BUFFER_EXT", GL_DRAW_BUFFER_EXT},
        {"GL_READ_BUFFER_EXT", GL_READ_BUFFER_EXT},
        {"GL_MAX_MULTIVIEW_BUFFERS_EXT", GL_MAX_MULTIVIEW_BUFFERS_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_multiview_draw_buffers */
#endif /* _PYCGLES2_GL_EXT_MULTIVIEW_DRAW_BUFFERS_H_ */

#ifndef _PYCGLES2_GL_EXT_TEXTURE_BUFFER_H_
#define _PYCGLES2_GL_EXT_TEXTURE_BUFFER_H_
#ifdef GL_EXT_texture_buffer
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTexBufferEXT */
static PyObject *
PyCGLES2_glTexBufferEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexBufferEXT");
    return NULL;
}


/* TODO(NotImplemented): glTexBufferRangeEXT */
static PyObject *
PyCGLES2_glTexBufferRangeEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexBufferRangeEXT (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexBufferRangeEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_texture_buffer(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_BUFFER_EXT", GL_TEXTURE_BUFFER_EXT},
        {"GL_TEXTURE_BUFFER_BINDING_EXT", GL_TEXTURE_BUFFER_BINDING_EXT},
        {"GL_MAX_TEXTURE_BUFFER_SIZE_EXT", GL_MAX_TEXTURE_BUFFER_SIZE_EXT},
        {"GL_TEXTURE_BINDING_BUFFER_EXT", GL_TEXTURE_BINDING_BUFFER_EXT},
        {"GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT", GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT},
        {"GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT", GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT},
        {"GL_SAMPLER_BUFFER_EXT", GL_SAMPLER_BUFFER_EXT},
        {"GL_INT_SAMPLER_BUFFER_EXT", GL_INT_SAMPLER_BUFFER_EXT},
        {"GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT", GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT},
        {"GL_IMAGE_BUFFER_EXT", GL_IMAGE_BUFFER_EXT},
        {"GL_INT_IMAGE_BUFFER_EXT", GL_INT_IMAGE_BUFFER_EXT},
        {"GL_UNSIGNED_INT_IMAGE_BUFFER_EXT", GL_UNSIGNED_INT_IMAGE_BUFFER_EXT},
        {"GL_TEXTURE_BUFFER_OFFSET_EXT", GL_TEXTURE_BUFFER_OFFSET_EXT},
        {"GL_TEXTURE_BUFFER_SIZE_EXT", GL_TEXTURE_BUFFER_SIZE_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_buffer */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_BUFFER_H_ */

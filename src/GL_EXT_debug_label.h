#ifndef _PYCGLES2_GL_EXT_DEBUG_LABEL_H_
#define _PYCGLES2_GL_EXT_DEBUG_LABEL_H_
#ifdef GL_EXT_debug_label
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glLabelObjectEXT */
static PyObject *
PyCGLES2_glLabelObjectEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glLabelObjectEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetObjectLabelEXT */
static PyObject *
PyCGLES2_glGetObjectLabelEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetObjectLabelEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_debug_label(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PROGRAM_PIPELINE_OBJECT_EXT", GL_PROGRAM_PIPELINE_OBJECT_EXT},
        {"GL_PROGRAM_OBJECT_EXT", GL_PROGRAM_OBJECT_EXT},
        {"GL_SHADER_OBJECT_EXT", GL_SHADER_OBJECT_EXT},
        {"GL_BUFFER_OBJECT_EXT", GL_BUFFER_OBJECT_EXT},
        {"GL_QUERY_OBJECT_EXT", GL_QUERY_OBJECT_EXT},
        {"GL_VERTEX_ARRAY_OBJECT_EXT", GL_VERTEX_ARRAY_OBJECT_EXT},
        {"GL_SAMPLER", GL_SAMPLER},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_debug_label */
#endif /* _PYCGLES2_GL_EXT_DEBUG_LABEL_H_ */

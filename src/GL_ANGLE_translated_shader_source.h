#ifndef _PYCGLES2_GL_ANGLE_TRANSLATED_SHADER_SOURCE_H_
#define _PYCGLES2_GL_ANGLE_TRANSLATED_SHADER_SOURCE_H_
#ifdef GL_ANGLE_translated_shader_source
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetTranslatedShaderSourceANGLE */
static PyObject *
PyCGLES2_glGetTranslatedShaderSourceANGLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufsize, GLsizei *length, GLchar *source) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTranslatedShaderSourceANGLE");
    return NULL;
}


static int
PyCGLES2_GL_ANGLE_translated_shader_source(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE", GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_translated_shader_source */
#endif /* _PYCGLES2_GL_ANGLE_TRANSLATED_SHADER_SOURCE_H_ */

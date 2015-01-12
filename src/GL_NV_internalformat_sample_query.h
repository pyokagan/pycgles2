#ifndef _PYCGLES2_GL_NV_INTERNALFORMAT_SAMPLE_QUERY_H_
#define _PYCGLES2_GL_NV_INTERNALFORMAT_SAMPLE_QUERY_H_
#ifdef GL_NV_internalformat_sample_query
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetInternalformatSampleivNV */
static PyObject *
PyCGLES2_glGetInternalformatSampleivNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetInternalformatSampleivNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_internalformat_sample_query(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_2D_MULTISAMPLE_ARRAY", GL_TEXTURE_2D_MULTISAMPLE_ARRAY},
        {"GL_MULTISAMPLES_NV", GL_MULTISAMPLES_NV},
        {"GL_SUPERSAMPLE_SCALE_X_NV", GL_SUPERSAMPLE_SCALE_X_NV},
        {"GL_SUPERSAMPLE_SCALE_Y_NV", GL_SUPERSAMPLE_SCALE_Y_NV},
        {"GL_CONFORMANT_NV", GL_CONFORMANT_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_internalformat_sample_query */
#endif /* _PYCGLES2_GL_NV_INTERNALFORMAT_SAMPLE_QUERY_H_ */

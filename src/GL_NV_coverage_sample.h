#ifndef _PYCGLES2_GL_NV_COVERAGE_SAMPLE_H_
#define _PYCGLES2_GL_NV_COVERAGE_SAMPLE_H_
#ifdef GL_NV_coverage_sample
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glCoverageMaskNV */
static PyObject *
PyCGLES2_glCoverageMaskNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverageMaskNV (GLboolean mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverageMaskNV");
    return NULL;
}


/* TODO(NotImplemented): glCoverageOperationNV */
static PyObject *
PyCGLES2_glCoverageOperationNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverageOperationNV (GLenum operation) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverageOperationNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_coverage_sample(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COVERAGE_COMPONENT_NV", GL_COVERAGE_COMPONENT_NV},
        {"GL_COVERAGE_COMPONENT4_NV", GL_COVERAGE_COMPONENT4_NV},
        {"GL_COVERAGE_ATTACHMENT_NV", GL_COVERAGE_ATTACHMENT_NV},
        {"GL_COVERAGE_BUFFERS_NV", GL_COVERAGE_BUFFERS_NV},
        {"GL_COVERAGE_SAMPLES_NV", GL_COVERAGE_SAMPLES_NV},
        {"GL_COVERAGE_ALL_FRAGMENTS_NV", GL_COVERAGE_ALL_FRAGMENTS_NV},
        {"GL_COVERAGE_EDGE_FRAGMENTS_NV", GL_COVERAGE_EDGE_FRAGMENTS_NV},
        {"GL_COVERAGE_AUTOMATIC_NV", GL_COVERAGE_AUTOMATIC_NV},
        {"GL_COVERAGE_BUFFER_BIT_NV", GL_COVERAGE_BUFFER_BIT_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_coverage_sample */
#endif /* _PYCGLES2_GL_NV_COVERAGE_SAMPLE_H_ */

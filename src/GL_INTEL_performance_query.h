#ifndef _PYCGLES2_GL_INTEL_PERFORMANCE_QUERY_H_
#define _PYCGLES2_GL_INTEL_PERFORMANCE_QUERY_H_
#ifdef GL_INTEL_performance_query
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glBeginPerfQueryINTEL */
static PyObject *
PyCGLES2_glBeginPerfQueryINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginPerfQueryINTEL (GLuint queryHandle) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginPerfQueryINTEL");
    return NULL;
}


/* TODO(NotImplemented): glCreatePerfQueryINTEL */
static PyObject *
PyCGLES2_glCreatePerfQueryINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCreatePerfQueryINTEL (GLuint queryId, GLuint *queryHandle) */
    PyErr_SetString(PyExc_NotImplementedError, "glCreatePerfQueryINTEL");
    return NULL;
}


/* TODO(NotImplemented): glDeletePerfQueryINTEL */
static PyObject *
PyCGLES2_glDeletePerfQueryINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeletePerfQueryINTEL (GLuint queryHandle) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeletePerfQueryINTEL");
    return NULL;
}


/* TODO(NotImplemented): glEndPerfQueryINTEL */
static PyObject *
PyCGLES2_glEndPerfQueryINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndPerfQueryINTEL (GLuint queryHandle) */
    PyErr_SetString(PyExc_NotImplementedError, "glEndPerfQueryINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetFirstPerfQueryIdINTEL */
static PyObject *
PyCGLES2_glGetFirstPerfQueryIdINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFirstPerfQueryIdINTEL (GLuint *queryId) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFirstPerfQueryIdINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetNextPerfQueryIdINTEL */
static PyObject *
PyCGLES2_glGetNextPerfQueryIdINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint *nextQueryId) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetNextPerfQueryIdINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfCounterInfoINTEL */
static PyObject *
PyCGLES2_glGetPerfCounterInfoINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfCounterInfoINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfQueryDataINTEL */
static PyObject *
PyCGLES2_glGetPerfQueryDataINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfQueryDataINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfQueryIdByNameINTEL */
static PyObject *
PyCGLES2_glGetPerfQueryIdByNameINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfQueryIdByNameINTEL (GLchar *queryName, GLuint *queryId) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfQueryIdByNameINTEL");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfQueryInfoINTEL */
static PyObject *
PyCGLES2_glGetPerfQueryInfoINTEL(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfQueryInfoINTEL");
    return NULL;
}


static int
PyCGLES2_GL_INTEL_performance_query(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PERFQUERY_SINGLE_CONTEXT_INTEL", GL_PERFQUERY_SINGLE_CONTEXT_INTEL},
        {"GL_PERFQUERY_GLOBAL_CONTEXT_INTEL", GL_PERFQUERY_GLOBAL_CONTEXT_INTEL},
        {"GL_PERFQUERY_WAIT_INTEL", GL_PERFQUERY_WAIT_INTEL},
        {"GL_PERFQUERY_FLUSH_INTEL", GL_PERFQUERY_FLUSH_INTEL},
        {"GL_PERFQUERY_DONOT_FLUSH_INTEL", GL_PERFQUERY_DONOT_FLUSH_INTEL},
        {"GL_PERFQUERY_COUNTER_EVENT_INTEL", GL_PERFQUERY_COUNTER_EVENT_INTEL},
        {"GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL", GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL},
        {"GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL", GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL},
        {"GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL", GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL},
        {"GL_PERFQUERY_COUNTER_RAW_INTEL", GL_PERFQUERY_COUNTER_RAW_INTEL},
        {"GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL", GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL},
        {"GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL", GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL},
        {"GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL", GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL},
        {"GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL", GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL},
        {"GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL", GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL},
        {"GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL", GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL},
        {"GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL", GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL},
        {"GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL", GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL},
        {"GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL", GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL},
        {"GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL", GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_INTEL_performance_query */
#endif /* _PYCGLES2_GL_INTEL_PERFORMANCE_QUERY_H_ */

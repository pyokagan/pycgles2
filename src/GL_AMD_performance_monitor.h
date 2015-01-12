#ifndef _PYCGLES2_GL_AMD_PERFORMANCE_MONITOR_H_
#define _PYCGLES2_GL_AMD_PERFORMANCE_MONITOR_H_
#ifdef GL_AMD_performance_monitor
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGetPerfMonitorGroupsAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorGroupsAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorGroupsAMD");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfMonitorCountersAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorCountersAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorCountersAMD");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfMonitorGroupStringAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorGroupStringAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorGroupStringAMD");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfMonitorCounterStringAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorCounterStringAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorCounterStringAMD");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfMonitorCounterInfoAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorCounterInfoAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorCounterInfoAMD");
    return NULL;
}


/* TODO(NotImplemented): glGenPerfMonitorsAMD */
static PyObject *
PyCGLES2_glGenPerfMonitorsAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenPerfMonitorsAMD");
    return NULL;
}


/* TODO(NotImplemented): glDeletePerfMonitorsAMD */
static PyObject *
PyCGLES2_glDeletePerfMonitorsAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeletePerfMonitorsAMD");
    return NULL;
}


/* TODO(NotImplemented): glSelectPerfMonitorCountersAMD */
static PyObject *
PyCGLES2_glSelectPerfMonitorCountersAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList) */
    PyErr_SetString(PyExc_NotImplementedError, "glSelectPerfMonitorCountersAMD");
    return NULL;
}


/* TODO(NotImplemented): glBeginPerfMonitorAMD */
static PyObject *
PyCGLES2_glBeginPerfMonitorAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginPerfMonitorAMD (GLuint monitor) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginPerfMonitorAMD");
    return NULL;
}


/* TODO(NotImplemented): glEndPerfMonitorAMD */
static PyObject *
PyCGLES2_glEndPerfMonitorAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndPerfMonitorAMD (GLuint monitor) */
    PyErr_SetString(PyExc_NotImplementedError, "glEndPerfMonitorAMD");
    return NULL;
}


/* TODO(NotImplemented): glGetPerfMonitorCounterDataAMD */
static PyObject *
PyCGLES2_glGetPerfMonitorCounterDataAMD(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPerfMonitorCounterDataAMD");
    return NULL;
}


static int
PyCGLES2_GL_AMD_performance_monitor(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COUNTER_TYPE_AMD", GL_COUNTER_TYPE_AMD},
        {"GL_COUNTER_RANGE_AMD", GL_COUNTER_RANGE_AMD},
        {"GL_UNSIGNED_INT64_AMD", GL_UNSIGNED_INT64_AMD},
        {"GL_PERCENTAGE_AMD", GL_PERCENTAGE_AMD},
        {"GL_PERFMON_RESULT_AVAILABLE_AMD", GL_PERFMON_RESULT_AVAILABLE_AMD},
        {"GL_PERFMON_RESULT_SIZE_AMD", GL_PERFMON_RESULT_SIZE_AMD},
        {"GL_PERFMON_RESULT_AMD", GL_PERFMON_RESULT_AMD},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_AMD_performance_monitor */
#endif /* _PYCGLES2_GL_AMD_PERFORMANCE_MONITOR_H_ */

#ifndef _PYCGLES2_GL_APPLE_SYNC_H_
#define _PYCGLES2_GL_APPLE_SYNC_H_
#ifdef GL_APPLE_sync
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glFenceSyncAPPLE */
static PyObject *
PyCGLES2_glFenceSyncAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLsync glFenceSyncAPPLE (GLenum condition, GLbitfield flags) */
    PyErr_SetString(PyExc_NotImplementedError, "glFenceSyncAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glIsSyncAPPLE */
static PyObject *
PyCGLES2_glIsSyncAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsSyncAPPLE (GLsync sync) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsSyncAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glDeleteSyncAPPLE */
static PyObject *
PyCGLES2_glDeleteSyncAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteSyncAPPLE (GLsync sync) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteSyncAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glClientWaitSyncAPPLE */
static PyObject *
PyCGLES2_glClientWaitSyncAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout) */
    PyErr_SetString(PyExc_NotImplementedError, "glClientWaitSyncAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glWaitSyncAPPLE */
static PyObject *
PyCGLES2_glWaitSyncAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout) */
    PyErr_SetString(PyExc_NotImplementedError, "glWaitSyncAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glGetInteger64vAPPLE */
static PyObject *
PyCGLES2_glGetInteger64vAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetInteger64vAPPLE (GLenum pname, GLint64 *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetInteger64vAPPLE");
    return NULL;
}


/* TODO(NotImplemented): glGetSyncivAPPLE */
static PyObject *
PyCGLES2_glGetSyncivAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSyncivAPPLE");
    return NULL;
}


static int
PyCGLES2_GL_APPLE_sync(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_SYNC_OBJECT_APPLE", GL_SYNC_OBJECT_APPLE},
        {"GL_MAX_SERVER_WAIT_TIMEOUT_APPLE", GL_MAX_SERVER_WAIT_TIMEOUT_APPLE},
        {"GL_OBJECT_TYPE_APPLE", GL_OBJECT_TYPE_APPLE},
        {"GL_SYNC_CONDITION_APPLE", GL_SYNC_CONDITION_APPLE},
        {"GL_SYNC_STATUS_APPLE", GL_SYNC_STATUS_APPLE},
        {"GL_SYNC_FLAGS_APPLE", GL_SYNC_FLAGS_APPLE},
        {"GL_SYNC_FENCE_APPLE", GL_SYNC_FENCE_APPLE},
        {"GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE", GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE},
        {"GL_UNSIGNALED_APPLE", GL_UNSIGNALED_APPLE},
        {"GL_SIGNALED_APPLE", GL_SIGNALED_APPLE},
        {"GL_ALREADY_SIGNALED_APPLE", GL_ALREADY_SIGNALED_APPLE},
        {"GL_TIMEOUT_EXPIRED_APPLE", GL_TIMEOUT_EXPIRED_APPLE},
        {"GL_CONDITION_SATISFIED_APPLE", GL_CONDITION_SATISFIED_APPLE},
        {"GL_WAIT_FAILED_APPLE", GL_WAIT_FAILED_APPLE},
        {"GL_SYNC_FLUSH_COMMANDS_BIT_APPLE", GL_SYNC_FLUSH_COMMANDS_BIT_APPLE},
        {"GL_TIMEOUT_IGNORED_APPLE", GL_TIMEOUT_IGNORED_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_sync */
#endif /* _PYCGLES2_GL_APPLE_SYNC_H_ */

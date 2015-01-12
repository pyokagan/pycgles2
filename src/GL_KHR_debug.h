#ifndef _PYCGLES2_GL_KHR_DEBUG_H_
#define _PYCGLES2_GL_KHR_DEBUG_H_
#ifdef GL_KHR_debug
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDebugMessageControlKHR */
static PyObject *
PyCGLES2_glDebugMessageControlKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) */
    PyErr_SetString(PyExc_NotImplementedError, "glDebugMessageControlKHR");
    return NULL;
}


/* TODO(NotImplemented): glDebugMessageInsertKHR */
static PyObject *
PyCGLES2_glDebugMessageInsertKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) */
    PyErr_SetString(PyExc_NotImplementedError, "glDebugMessageInsertKHR");
    return NULL;
}


/* TODO(NotImplemented): glDebugMessageCallbackKHR */
static PyObject *
PyCGLES2_glDebugMessageCallbackKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void *userParam) */
    PyErr_SetString(PyExc_NotImplementedError, "glDebugMessageCallbackKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetDebugMessageLogKHR */
static PyObject *
PyCGLES2_glGetDebugMessageLogKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetDebugMessageLogKHR");
    return NULL;
}


/* TODO(NotImplemented): glPushDebugGroupKHR */
static PyObject *
PyCGLES2_glPushDebugGroupKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar *message) */
    PyErr_SetString(PyExc_NotImplementedError, "glPushDebugGroupKHR");
    return NULL;
}


/* TODO(NotImplemented): glPopDebugGroupKHR */
static PyObject *
PyCGLES2_glPopDebugGroupKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPopDebugGroupKHR () */
    PyErr_SetString(PyExc_NotImplementedError, "glPopDebugGroupKHR");
    return NULL;
}


/* TODO(NotImplemented): glObjectLabelKHR */
static PyObject *
PyCGLES2_glObjectLabelKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glObjectLabelKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetObjectLabelKHR */
static PyObject *
PyCGLES2_glGetObjectLabelKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetObjectLabelKHR");
    return NULL;
}


/* TODO(NotImplemented): glObjectPtrLabelKHR */
static PyObject *
PyCGLES2_glObjectPtrLabelKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glObjectPtrLabelKHR (const void *ptr, GLsizei length, const GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glObjectPtrLabelKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetObjectPtrLabelKHR */
static PyObject *
PyCGLES2_glGetObjectPtrLabelKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetObjectPtrLabelKHR (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetObjectPtrLabelKHR");
    return NULL;
}


/* TODO(NotImplemented): glGetPointervKHR */
static PyObject *
PyCGLES2_glGetPointervKHR(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPointervKHR (GLenum pname, void **params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPointervKHR");
    return NULL;
}


static int
PyCGLES2_GL_KHR_debug(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR", GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR},
        {"GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR", GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR},
        {"GL_DEBUG_CALLBACK_FUNCTION_KHR", GL_DEBUG_CALLBACK_FUNCTION_KHR},
        {"GL_DEBUG_CALLBACK_USER_PARAM_KHR", GL_DEBUG_CALLBACK_USER_PARAM_KHR},
        {"GL_DEBUG_SOURCE_API_KHR", GL_DEBUG_SOURCE_API_KHR},
        {"GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR", GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR},
        {"GL_DEBUG_SOURCE_SHADER_COMPILER_KHR", GL_DEBUG_SOURCE_SHADER_COMPILER_KHR},
        {"GL_DEBUG_SOURCE_THIRD_PARTY_KHR", GL_DEBUG_SOURCE_THIRD_PARTY_KHR},
        {"GL_DEBUG_SOURCE_APPLICATION_KHR", GL_DEBUG_SOURCE_APPLICATION_KHR},
        {"GL_DEBUG_SOURCE_OTHER_KHR", GL_DEBUG_SOURCE_OTHER_KHR},
        {"GL_DEBUG_TYPE_ERROR_KHR", GL_DEBUG_TYPE_ERROR_KHR},
        {"GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR", GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR},
        {"GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR", GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR},
        {"GL_DEBUG_TYPE_PORTABILITY_KHR", GL_DEBUG_TYPE_PORTABILITY_KHR},
        {"GL_DEBUG_TYPE_PERFORMANCE_KHR", GL_DEBUG_TYPE_PERFORMANCE_KHR},
        {"GL_DEBUG_TYPE_OTHER_KHR", GL_DEBUG_TYPE_OTHER_KHR},
        {"GL_DEBUG_TYPE_MARKER_KHR", GL_DEBUG_TYPE_MARKER_KHR},
        {"GL_DEBUG_TYPE_PUSH_GROUP_KHR", GL_DEBUG_TYPE_PUSH_GROUP_KHR},
        {"GL_DEBUG_TYPE_POP_GROUP_KHR", GL_DEBUG_TYPE_POP_GROUP_KHR},
        {"GL_DEBUG_SEVERITY_NOTIFICATION_KHR", GL_DEBUG_SEVERITY_NOTIFICATION_KHR},
        {"GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR", GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR},
        {"GL_DEBUG_GROUP_STACK_DEPTH_KHR", GL_DEBUG_GROUP_STACK_DEPTH_KHR},
        {"GL_BUFFER_KHR", GL_BUFFER_KHR},
        {"GL_SHADER_KHR", GL_SHADER_KHR},
        {"GL_PROGRAM_KHR", GL_PROGRAM_KHR},
        {"GL_VERTEX_ARRAY_KHR", GL_VERTEX_ARRAY_KHR},
        {"GL_QUERY_KHR", GL_QUERY_KHR},
        {"GL_SAMPLER_KHR", GL_SAMPLER_KHR},
        {"GL_MAX_LABEL_LENGTH_KHR", GL_MAX_LABEL_LENGTH_KHR},
        {"GL_MAX_DEBUG_MESSAGE_LENGTH_KHR", GL_MAX_DEBUG_MESSAGE_LENGTH_KHR},
        {"GL_MAX_DEBUG_LOGGED_MESSAGES_KHR", GL_MAX_DEBUG_LOGGED_MESSAGES_KHR},
        {"GL_DEBUG_LOGGED_MESSAGES_KHR", GL_DEBUG_LOGGED_MESSAGES_KHR},
        {"GL_DEBUG_SEVERITY_HIGH_KHR", GL_DEBUG_SEVERITY_HIGH_KHR},
        {"GL_DEBUG_SEVERITY_MEDIUM_KHR", GL_DEBUG_SEVERITY_MEDIUM_KHR},
        {"GL_DEBUG_SEVERITY_LOW_KHR", GL_DEBUG_SEVERITY_LOW_KHR},
        {"GL_DEBUG_OUTPUT_KHR", GL_DEBUG_OUTPUT_KHR},
        {"GL_CONTEXT_FLAG_DEBUG_BIT_KHR", GL_CONTEXT_FLAG_DEBUG_BIT_KHR},
        {"GL_STACK_OVERFLOW_KHR", GL_STACK_OVERFLOW_KHR},
        {"GL_STACK_UNDERFLOW_KHR", GL_STACK_UNDERFLOW_KHR},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_KHR_debug */
#endif /* _PYCGLES2_GL_KHR_DEBUG_H_ */

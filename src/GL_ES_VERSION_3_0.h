#ifndef _PYCGLES2_GL_ES_VERSION_3_0_H_
#define _PYCGLES2_GL_ES_VERSION_3_0_H_
#ifdef GL_ES_VERSION_3_0
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glReadBuffer */
static PyObject *
PyCGLES2_glReadBuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadBuffer (GLenum src) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadBuffer");
    return NULL;
}


/* TODO(NotImplemented): glDrawRangeElements */
static PyObject *
PyCGLES2_glDrawRangeElements(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawRangeElements");
    return NULL;
}


/* TODO(NotImplemented): glTexImage3D */
static PyObject *
PyCGLES2_glTexImage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexImage3D");
    return NULL;
}


/* TODO(NotImplemented): glTexSubImage3D */
static PyObject *
PyCGLES2_glTexSubImage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexSubImage3D");
    return NULL;
}


/* TODO(NotImplemented): glCopyTexSubImage3D */
static PyObject *
PyCGLES2_glCopyTexSubImage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyTexSubImage3D");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexImage3D */
static PyObject *
PyCGLES2_glCompressedTexImage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexImage3D");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexSubImage3D */
static PyObject *
PyCGLES2_glCompressedTexSubImage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexSubImage3D");
    return NULL;
}


/* TODO(NotImplemented): glGenQueries */
static PyObject *
PyCGLES2_glGenQueries(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenQueries (GLsizei n, GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenQueries");
    return NULL;
}


/* TODO(NotImplemented): glDeleteQueries */
static PyObject *
PyCGLES2_glDeleteQueries(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteQueries (GLsizei n, const GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteQueries");
    return NULL;
}


/* TODO(NotImplemented): glIsQuery */
static PyObject *
PyCGLES2_glIsQuery(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsQuery (GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsQuery");
    return NULL;
}


/* TODO(NotImplemented): glBeginQuery */
static PyObject *
PyCGLES2_glBeginQuery(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginQuery (GLenum target, GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginQuery");
    return NULL;
}


/* TODO(NotImplemented): glEndQuery */
static PyObject *
PyCGLES2_glEndQuery(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndQuery (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glEndQuery");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryiv */
static PyObject *
PyCGLES2_glGetQueryiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryiv (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryiv");
    return NULL;
}


/* TODO(NotImplemented): glGetQueryObjectuiv */
static PyObject *
PyCGLES2_glGetQueryObjectuiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetQueryObjectuiv");
    return NULL;
}


/* TODO(NotImplemented): glUnmapBuffer */
static PyObject *
PyCGLES2_glUnmapBuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glUnmapBuffer (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glUnmapBuffer");
    return NULL;
}


/* TODO(NotImplemented): glGetBufferPointerv */
static PyObject *
PyCGLES2_glGetBufferPointerv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBufferPointerv (GLenum target, GLenum pname, void **params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBufferPointerv");
    return NULL;
}


/* TODO(NotImplemented): glDrawBuffers */
static PyObject *
PyCGLES2_glDrawBuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawBuffers (GLsizei n, const GLenum *bufs) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawBuffers");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix2x3fv */
static PyObject *
PyCGLES2_glUniformMatrix2x3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix2x3fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix3x2fv */
static PyObject *
PyCGLES2_glUniformMatrix3x2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix3x2fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix2x4fv */
static PyObject *
PyCGLES2_glUniformMatrix2x4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix2x4fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix4x2fv */
static PyObject *
PyCGLES2_glUniformMatrix4x2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix4x2fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix3x4fv */
static PyObject *
PyCGLES2_glUniformMatrix3x4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix3x4fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix4x3fv */
static PyObject *
PyCGLES2_glUniformMatrix4x3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix4x3fv");
    return NULL;
}


/* TODO(NotImplemented): glBlitFramebuffer */
static PyObject *
PyCGLES2_glBlitFramebuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlitFramebuffer");
    return NULL;
}


/* TODO(NotImplemented): glRenderbufferStorageMultisample */
static PyObject *
PyCGLES2_glRenderbufferStorageMultisample(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorageMultisample");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferTextureLayer */
static PyObject *
PyCGLES2_glFramebufferTextureLayer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferTextureLayer");
    return NULL;
}


/* TODO(NotImplemented): glMapBufferRange */
static PyObject *
PyCGLES2_glMapBufferRange(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void *glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) */
    PyErr_SetString(PyExc_NotImplementedError, "glMapBufferRange");
    return NULL;
}


/* TODO(NotImplemented): glFlushMappedBufferRange */
static PyObject *
PyCGLES2_glFlushMappedBufferRange(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length) */
    PyErr_SetString(PyExc_NotImplementedError, "glFlushMappedBufferRange");
    return NULL;
}


/* TODO(NotImplemented): glBindVertexArray */
static PyObject *
PyCGLES2_glBindVertexArray(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindVertexArray (GLuint array) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindVertexArray");
    return NULL;
}


/* TODO(NotImplemented): glDeleteVertexArrays */
static PyObject *
PyCGLES2_glDeleteVertexArrays(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteVertexArrays (GLsizei n, const GLuint *arrays) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteVertexArrays");
    return NULL;
}


/* TODO(NotImplemented): glGenVertexArrays */
static PyObject *
PyCGLES2_glGenVertexArrays(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenVertexArrays (GLsizei n, GLuint *arrays) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenVertexArrays");
    return NULL;
}


/* TODO(NotImplemented): glIsVertexArray */
static PyObject *
PyCGLES2_glIsVertexArray(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsVertexArray (GLuint array) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsVertexArray");
    return NULL;
}


/* TODO(NotImplemented): glGetIntegeri_v */
static PyObject *
PyCGLES2_glGetIntegeri_v(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetIntegeri_v (GLenum target, GLuint index, GLint *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetIntegeri_v");
    return NULL;
}


/* TODO(NotImplemented): glBeginTransformFeedback */
static PyObject *
PyCGLES2_glBeginTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBeginTransformFeedback (GLenum primitiveMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glBeginTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glEndTransformFeedback */
static PyObject *
PyCGLES2_glEndTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEndTransformFeedback () */
    PyErr_SetString(PyExc_NotImplementedError, "glEndTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glBindBufferRange */
static PyObject *
PyCGLES2_glBindBufferRange(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindBufferRange");
    return NULL;
}


/* TODO(NotImplemented): glBindBufferBase */
static PyObject *
PyCGLES2_glBindBufferBase(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindBufferBase (GLenum target, GLuint index, GLuint buffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindBufferBase");
    return NULL;
}


/* TODO(NotImplemented): glTransformFeedbackVaryings */
static PyObject *
PyCGLES2_glTransformFeedbackVaryings(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glTransformFeedbackVaryings");
    return NULL;
}


/* TODO(NotImplemented): glGetTransformFeedbackVarying */
static PyObject *
PyCGLES2_glGetTransformFeedbackVarying(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTransformFeedbackVarying");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribIPointer */
static PyObject *
PyCGLES2_glVertexAttribIPointer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribIPointer");
    return NULL;
}


/* TODO(NotImplemented): glGetVertexAttribIiv */
static PyObject *
PyCGLES2_glGetVertexAttribIiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetVertexAttribIiv");
    return NULL;
}


/* TODO(NotImplemented): glGetVertexAttribIuiv */
static PyObject *
PyCGLES2_glGetVertexAttribIuiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetVertexAttribIuiv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribI4i */
static PyObject *
PyCGLES2_glVertexAttribI4i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribI4i");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribI4ui */
static PyObject *
PyCGLES2_glVertexAttribI4ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribI4ui");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribI4iv */
static PyObject *
PyCGLES2_glVertexAttribI4iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribI4iv (GLuint index, const GLint *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribI4iv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribI4uiv */
static PyObject *
PyCGLES2_glVertexAttribI4uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribI4uiv (GLuint index, const GLuint *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribI4uiv");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformuiv */
static PyObject *
PyCGLES2_glGetUniformuiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetUniformuiv (GLuint program, GLint location, GLuint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformuiv");
    return NULL;
}


/* TODO(NotImplemented): glGetFragDataLocation */
static PyObject *
PyCGLES2_glGetFragDataLocation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLint glGetFragDataLocation (GLuint program, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFragDataLocation");
    return NULL;
}


/* TODO(NotImplemented): glUniform1ui */
static PyObject *
PyCGLES2_glUniform1ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1ui (GLint location, GLuint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1ui");
    return NULL;
}


/* TODO(NotImplemented): glUniform2ui */
static PyObject *
PyCGLES2_glUniform2ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2ui (GLint location, GLuint v0, GLuint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2ui");
    return NULL;
}


/* TODO(NotImplemented): glUniform3ui */
static PyObject *
PyCGLES2_glUniform3ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3ui");
    return NULL;
}


/* TODO(NotImplemented): glUniform4ui */
static PyObject *
PyCGLES2_glUniform4ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4ui");
    return NULL;
}


/* TODO(NotImplemented): glUniform1uiv */
static PyObject *
PyCGLES2_glUniform1uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1uiv (GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1uiv");
    return NULL;
}


/* TODO(NotImplemented): glUniform2uiv */
static PyObject *
PyCGLES2_glUniform2uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2uiv (GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2uiv");
    return NULL;
}


/* TODO(NotImplemented): glUniform3uiv */
static PyObject *
PyCGLES2_glUniform3uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3uiv (GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3uiv");
    return NULL;
}


/* TODO(NotImplemented): glUniform4uiv */
static PyObject *
PyCGLES2_glUniform4uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4uiv (GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4uiv");
    return NULL;
}


/* TODO(NotImplemented): glClearBufferiv */
static PyObject *
PyCGLES2_glClearBufferiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearBufferiv");
    return NULL;
}


/* TODO(NotImplemented): glClearBufferuiv */
static PyObject *
PyCGLES2_glClearBufferuiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearBufferuiv");
    return NULL;
}


/* TODO(NotImplemented): glClearBufferfv */
static PyObject *
PyCGLES2_glClearBufferfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearBufferfv");
    return NULL;
}


/* TODO(NotImplemented): glClearBufferfi */
static PyObject *
PyCGLES2_glClearBufferfi(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearBufferfi");
    return NULL;
}


/* TODO(NotImplemented): glGetStringi */
static PyObject *
PyCGLES2_glGetStringi(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* const GLubyte *glGetStringi (GLenum name, GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetStringi");
    return NULL;
}


/* TODO(NotImplemented): glCopyBufferSubData */
static PyObject *
PyCGLES2_glCopyBufferSubData(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyBufferSubData");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformIndices */
static PyObject *
PyCGLES2_glGetUniformIndices(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformIndices");
    return NULL;
}


/* TODO(NotImplemented): glGetActiveUniformsiv */
static PyObject *
PyCGLES2_glGetActiveUniformsiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetActiveUniformsiv");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformBlockIndex */
static PyObject *
PyCGLES2_glGetUniformBlockIndex(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformBlockIndex");
    return NULL;
}


/* TODO(NotImplemented): glGetActiveUniformBlockiv */
static PyObject *
PyCGLES2_glGetActiveUniformBlockiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetActiveUniformBlockiv");
    return NULL;
}


/* TODO(NotImplemented): glGetActiveUniformBlockName */
static PyObject *
PyCGLES2_glGetActiveUniformBlockName(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetActiveUniformBlockName");
    return NULL;
}


/* TODO(NotImplemented): glUniformBlockBinding */
static PyObject *
PyCGLES2_glUniformBlockBinding(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformBlockBinding");
    return NULL;
}


/* TODO(NotImplemented): glDrawArraysInstanced */
static PyObject *
PyCGLES2_glDrawArraysInstanced(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysInstanced");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsInstanced */
static PyObject *
PyCGLES2_glDrawElementsInstanced(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsInstanced");
    return NULL;
}


/* TODO(NotImplemented): glFenceSync */
static PyObject *
PyCGLES2_glFenceSync(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLsync glFenceSync (GLenum condition, GLbitfield flags) */
    PyErr_SetString(PyExc_NotImplementedError, "glFenceSync");
    return NULL;
}


/* TODO(NotImplemented): glIsSync */
static PyObject *
PyCGLES2_glIsSync(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsSync (GLsync sync) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsSync");
    return NULL;
}


/* TODO(NotImplemented): glDeleteSync */
static PyObject *
PyCGLES2_glDeleteSync(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteSync (GLsync sync) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteSync");
    return NULL;
}


/* TODO(NotImplemented): glClientWaitSync */
static PyObject *
PyCGLES2_glClientWaitSync(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) */
    PyErr_SetString(PyExc_NotImplementedError, "glClientWaitSync");
    return NULL;
}


/* TODO(NotImplemented): glWaitSync */
static PyObject *
PyCGLES2_glWaitSync(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) */
    PyErr_SetString(PyExc_NotImplementedError, "glWaitSync");
    return NULL;
}


/* TODO(NotImplemented): glGetInteger64v */
static PyObject *
PyCGLES2_glGetInteger64v(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetInteger64v (GLenum pname, GLint64 *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetInteger64v");
    return NULL;
}


/* TODO(NotImplemented): glGetSynciv */
static PyObject *
PyCGLES2_glGetSynciv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSynciv");
    return NULL;
}


/* TODO(NotImplemented): glGetInteger64i_v */
static PyObject *
PyCGLES2_glGetInteger64i_v(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetInteger64i_v");
    return NULL;
}


/* TODO(NotImplemented): glGetBufferParameteri64v */
static PyObject *
PyCGLES2_glGetBufferParameteri64v(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBufferParameteri64v");
    return NULL;
}


/* TODO(NotImplemented): glGenSamplers */
static PyObject *
PyCGLES2_glGenSamplers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenSamplers (GLsizei count, GLuint *samplers) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenSamplers");
    return NULL;
}


/* TODO(NotImplemented): glDeleteSamplers */
static PyObject *
PyCGLES2_glDeleteSamplers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteSamplers (GLsizei count, const GLuint *samplers) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteSamplers");
    return NULL;
}


/* TODO(NotImplemented): glIsSampler */
static PyObject *
PyCGLES2_glIsSampler(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsSampler (GLuint sampler) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsSampler");
    return NULL;
}


/* TODO(NotImplemented): glBindSampler */
static PyObject *
PyCGLES2_glBindSampler(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindSampler (GLuint unit, GLuint sampler) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindSampler");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameteri */
static PyObject *
PyCGLES2_glSamplerParameteri(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameteri");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameteriv */
static PyObject *
PyCGLES2_glSamplerParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameterf */
static PyObject *
PyCGLES2_glSamplerParameterf(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameterf");
    return NULL;
}


/* TODO(NotImplemented): glSamplerParameterfv */
static PyObject *
PyCGLES2_glSamplerParameterfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param) */
    PyErr_SetString(PyExc_NotImplementedError, "glSamplerParameterfv");
    return NULL;
}


/* TODO(NotImplemented): glGetSamplerParameteriv */
static PyObject *
PyCGLES2_glGetSamplerParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSamplerParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetSamplerParameterfv */
static PyObject *
PyCGLES2_glGetSamplerParameterfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetSamplerParameterfv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribDivisor */
static PyObject *
PyCGLES2_glVertexAttribDivisor(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribDivisor (GLuint index, GLuint divisor) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribDivisor");
    return NULL;
}


/* TODO(NotImplemented): glBindTransformFeedback */
static PyObject *
PyCGLES2_glBindTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindTransformFeedback (GLenum target, GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glDeleteTransformFeedbacks */
static PyObject *
PyCGLES2_glDeleteTransformFeedbacks(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteTransformFeedbacks");
    return NULL;
}


/* TODO(NotImplemented): glGenTransformFeedbacks */
static PyObject *
PyCGLES2_glGenTransformFeedbacks(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenTransformFeedbacks (GLsizei n, GLuint *ids) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenTransformFeedbacks");
    return NULL;
}


/* TODO(NotImplemented): glIsTransformFeedback */
static PyObject *
PyCGLES2_glIsTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsTransformFeedback (GLuint id) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glPauseTransformFeedback */
static PyObject *
PyCGLES2_glPauseTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPauseTransformFeedback () */
    PyErr_SetString(PyExc_NotImplementedError, "glPauseTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glResumeTransformFeedback */
static PyObject *
PyCGLES2_glResumeTransformFeedback(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glResumeTransformFeedback () */
    PyErr_SetString(PyExc_NotImplementedError, "glResumeTransformFeedback");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramBinary */
static PyObject *
PyCGLES2_glGetProgramBinary(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramBinary");
    return NULL;
}


/* TODO(NotImplemented): glProgramBinary */
static PyObject *
PyCGLES2_glProgramBinary(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramBinary");
    return NULL;
}


/* TODO(NotImplemented): glProgramParameteri */
static PyObject *
PyCGLES2_glProgramParameteri(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramParameteri (GLuint program, GLenum pname, GLint value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramParameteri");
    return NULL;
}


/* TODO(NotImplemented): glInvalidateFramebuffer */
static PyObject *
PyCGLES2_glInvalidateFramebuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments) */
    PyErr_SetString(PyExc_NotImplementedError, "glInvalidateFramebuffer");
    return NULL;
}


/* TODO(NotImplemented): glInvalidateSubFramebuffer */
static PyObject *
PyCGLES2_glInvalidateSubFramebuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glInvalidateSubFramebuffer");
    return NULL;
}


/* TODO(NotImplemented): glTexStorage2D */
static PyObject *
PyCGLES2_glTexStorage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage2D");
    return NULL;
}


/* TODO(NotImplemented): glTexStorage3D */
static PyObject *
PyCGLES2_glTexStorage3D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage3D");
    return NULL;
}


/* TODO(NotImplemented): glGetInternalformativ */
static PyObject *
PyCGLES2_glGetInternalformativ(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetInternalformativ");
    return NULL;
}


static int
PyCGLES2_GL_ES_VERSION_3_0(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_READ_BUFFER", GL_READ_BUFFER},
        {"GL_UNPACK_ROW_LENGTH", GL_UNPACK_ROW_LENGTH},
        {"GL_UNPACK_SKIP_ROWS", GL_UNPACK_SKIP_ROWS},
        {"GL_UNPACK_SKIP_PIXELS", GL_UNPACK_SKIP_PIXELS},
        {"GL_PACK_ROW_LENGTH", GL_PACK_ROW_LENGTH},
        {"GL_PACK_SKIP_ROWS", GL_PACK_SKIP_ROWS},
        {"GL_PACK_SKIP_PIXELS", GL_PACK_SKIP_PIXELS},
        {"GL_COLOR", GL_COLOR},
        {"GL_DEPTH", GL_DEPTH},
        {"GL_STENCIL", GL_STENCIL},
        {"GL_RED", GL_RED},
        {"GL_RGB8", GL_RGB8},
        {"GL_RGBA8", GL_RGBA8},
        {"GL_RGB10_A2", GL_RGB10_A2},
        {"GL_TEXTURE_BINDING_3D", GL_TEXTURE_BINDING_3D},
        {"GL_UNPACK_SKIP_IMAGES", GL_UNPACK_SKIP_IMAGES},
        {"GL_UNPACK_IMAGE_HEIGHT", GL_UNPACK_IMAGE_HEIGHT},
        {"GL_TEXTURE_3D", GL_TEXTURE_3D},
        {"GL_TEXTURE_WRAP_R", GL_TEXTURE_WRAP_R},
        {"GL_MAX_3D_TEXTURE_SIZE", GL_MAX_3D_TEXTURE_SIZE},
        {"GL_UNSIGNED_INT_2_10_10_10_REV", GL_UNSIGNED_INT_2_10_10_10_REV},
        {"GL_MAX_ELEMENTS_VERTICES", GL_MAX_ELEMENTS_VERTICES},
        {"GL_MAX_ELEMENTS_INDICES", GL_MAX_ELEMENTS_INDICES},
        {"GL_TEXTURE_MIN_LOD", GL_TEXTURE_MIN_LOD},
        {"GL_TEXTURE_MAX_LOD", GL_TEXTURE_MAX_LOD},
        {"GL_TEXTURE_BASE_LEVEL", GL_TEXTURE_BASE_LEVEL},
        {"GL_TEXTURE_MAX_LEVEL", GL_TEXTURE_MAX_LEVEL},
        {"GL_MIN", GL_MIN},
        {"GL_MAX", GL_MAX},
        {"GL_DEPTH_COMPONENT24", GL_DEPTH_COMPONENT24},
        {"GL_MAX_TEXTURE_LOD_BIAS", GL_MAX_TEXTURE_LOD_BIAS},
        {"GL_TEXTURE_COMPARE_MODE", GL_TEXTURE_COMPARE_MODE},
        {"GL_TEXTURE_COMPARE_FUNC", GL_TEXTURE_COMPARE_FUNC},
        {"GL_CURRENT_QUERY", GL_CURRENT_QUERY},
        {"GL_QUERY_RESULT", GL_QUERY_RESULT},
        {"GL_QUERY_RESULT_AVAILABLE", GL_QUERY_RESULT_AVAILABLE},
        {"GL_BUFFER_MAPPED", GL_BUFFER_MAPPED},
        {"GL_BUFFER_MAP_POINTER", GL_BUFFER_MAP_POINTER},
        {"GL_STREAM_READ", GL_STREAM_READ},
        {"GL_STREAM_COPY", GL_STREAM_COPY},
        {"GL_STATIC_READ", GL_STATIC_READ},
        {"GL_STATIC_COPY", GL_STATIC_COPY},
        {"GL_DYNAMIC_READ", GL_DYNAMIC_READ},
        {"GL_DYNAMIC_COPY", GL_DYNAMIC_COPY},
        {"GL_MAX_DRAW_BUFFERS", GL_MAX_DRAW_BUFFERS},
        {"GL_DRAW_BUFFER0", GL_DRAW_BUFFER0},
        {"GL_DRAW_BUFFER1", GL_DRAW_BUFFER1},
        {"GL_DRAW_BUFFER2", GL_DRAW_BUFFER2},
        {"GL_DRAW_BUFFER3", GL_DRAW_BUFFER3},
        {"GL_DRAW_BUFFER4", GL_DRAW_BUFFER4},
        {"GL_DRAW_BUFFER5", GL_DRAW_BUFFER5},
        {"GL_DRAW_BUFFER6", GL_DRAW_BUFFER6},
        {"GL_DRAW_BUFFER7", GL_DRAW_BUFFER7},
        {"GL_DRAW_BUFFER8", GL_DRAW_BUFFER8},
        {"GL_DRAW_BUFFER9", GL_DRAW_BUFFER9},
        {"GL_DRAW_BUFFER10", GL_DRAW_BUFFER10},
        {"GL_DRAW_BUFFER11", GL_DRAW_BUFFER11},
        {"GL_DRAW_BUFFER12", GL_DRAW_BUFFER12},
        {"GL_DRAW_BUFFER13", GL_DRAW_BUFFER13},
        {"GL_DRAW_BUFFER14", GL_DRAW_BUFFER14},
        {"GL_DRAW_BUFFER15", GL_DRAW_BUFFER15},
        {"GL_MAX_FRAGMENT_UNIFORM_COMPONENTS", GL_MAX_FRAGMENT_UNIFORM_COMPONENTS},
        {"GL_MAX_VERTEX_UNIFORM_COMPONENTS", GL_MAX_VERTEX_UNIFORM_COMPONENTS},
        {"GL_SAMPLER_3D", GL_SAMPLER_3D},
        {"GL_SAMPLER_2D_SHADOW", GL_SAMPLER_2D_SHADOW},
        {"GL_FRAGMENT_SHADER_DERIVATIVE_HINT", GL_FRAGMENT_SHADER_DERIVATIVE_HINT},
        {"GL_PIXEL_PACK_BUFFER", GL_PIXEL_PACK_BUFFER},
        {"GL_PIXEL_UNPACK_BUFFER", GL_PIXEL_UNPACK_BUFFER},
        {"GL_PIXEL_PACK_BUFFER_BINDING", GL_PIXEL_PACK_BUFFER_BINDING},
        {"GL_PIXEL_UNPACK_BUFFER_BINDING", GL_PIXEL_UNPACK_BUFFER_BINDING},
        {"GL_FLOAT_MAT2x3", GL_FLOAT_MAT2x3},
        {"GL_FLOAT_MAT2x4", GL_FLOAT_MAT2x4},
        {"GL_FLOAT_MAT3x2", GL_FLOAT_MAT3x2},
        {"GL_FLOAT_MAT3x4", GL_FLOAT_MAT3x4},
        {"GL_FLOAT_MAT4x2", GL_FLOAT_MAT4x2},
        {"GL_FLOAT_MAT4x3", GL_FLOAT_MAT4x3},
        {"GL_SRGB", GL_SRGB},
        {"GL_SRGB8", GL_SRGB8},
        {"GL_SRGB8_ALPHA8", GL_SRGB8_ALPHA8},
        {"GL_COMPARE_REF_TO_TEXTURE", GL_COMPARE_REF_TO_TEXTURE},
        {"GL_MAJOR_VERSION", GL_MAJOR_VERSION},
        {"GL_MINOR_VERSION", GL_MINOR_VERSION},
        {"GL_NUM_EXTENSIONS", GL_NUM_EXTENSIONS},
        {"GL_RGBA32F", GL_RGBA32F},
        {"GL_RGB32F", GL_RGB32F},
        {"GL_RGBA16F", GL_RGBA16F},
        {"GL_RGB16F", GL_RGB16F},
        {"GL_VERTEX_ATTRIB_ARRAY_INTEGER", GL_VERTEX_ATTRIB_ARRAY_INTEGER},
        {"GL_MAX_ARRAY_TEXTURE_LAYERS", GL_MAX_ARRAY_TEXTURE_LAYERS},
        {"GL_MIN_PROGRAM_TEXEL_OFFSET", GL_MIN_PROGRAM_TEXEL_OFFSET},
        {"GL_MAX_PROGRAM_TEXEL_OFFSET", GL_MAX_PROGRAM_TEXEL_OFFSET},
        {"GL_MAX_VARYING_COMPONENTS", GL_MAX_VARYING_COMPONENTS},
        {"GL_TEXTURE_2D_ARRAY", GL_TEXTURE_2D_ARRAY},
        {"GL_TEXTURE_BINDING_2D_ARRAY", GL_TEXTURE_BINDING_2D_ARRAY},
        {"GL_R11F_G11F_B10F", GL_R11F_G11F_B10F},
        {"GL_UNSIGNED_INT_10F_11F_11F_REV", GL_UNSIGNED_INT_10F_11F_11F_REV},
        {"GL_RGB9_E5", GL_RGB9_E5},
        {"GL_UNSIGNED_INT_5_9_9_9_REV", GL_UNSIGNED_INT_5_9_9_9_REV},
        {"GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH", GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH},
        {"GL_TRANSFORM_FEEDBACK_BUFFER_MODE", GL_TRANSFORM_FEEDBACK_BUFFER_MODE},
        {"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS", GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS},
        {"GL_TRANSFORM_FEEDBACK_VARYINGS", GL_TRANSFORM_FEEDBACK_VARYINGS},
        {"GL_TRANSFORM_FEEDBACK_BUFFER_START", GL_TRANSFORM_FEEDBACK_BUFFER_START},
        {"GL_TRANSFORM_FEEDBACK_BUFFER_SIZE", GL_TRANSFORM_FEEDBACK_BUFFER_SIZE},
        {"GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN", GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN},
        {"GL_RASTERIZER_DISCARD", GL_RASTERIZER_DISCARD},
        {"GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS", GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS},
        {"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS", GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS},
        {"GL_INTERLEAVED_ATTRIBS", GL_INTERLEAVED_ATTRIBS},
        {"GL_SEPARATE_ATTRIBS", GL_SEPARATE_ATTRIBS},
        {"GL_TRANSFORM_FEEDBACK_BUFFER", GL_TRANSFORM_FEEDBACK_BUFFER},
        {"GL_TRANSFORM_FEEDBACK_BUFFER_BINDING", GL_TRANSFORM_FEEDBACK_BUFFER_BINDING},
        {"GL_RGBA32UI", GL_RGBA32UI},
        {"GL_RGB32UI", GL_RGB32UI},
        {"GL_RGBA16UI", GL_RGBA16UI},
        {"GL_RGB16UI", GL_RGB16UI},
        {"GL_RGBA8UI", GL_RGBA8UI},
        {"GL_RGB8UI", GL_RGB8UI},
        {"GL_RGBA32I", GL_RGBA32I},
        {"GL_RGB32I", GL_RGB32I},
        {"GL_RGBA16I", GL_RGBA16I},
        {"GL_RGB16I", GL_RGB16I},
        {"GL_RGBA8I", GL_RGBA8I},
        {"GL_RGB8I", GL_RGB8I},
        {"GL_RED_INTEGER", GL_RED_INTEGER},
        {"GL_RGB_INTEGER", GL_RGB_INTEGER},
        {"GL_RGBA_INTEGER", GL_RGBA_INTEGER},
        {"GL_SAMPLER_2D_ARRAY", GL_SAMPLER_2D_ARRAY},
        {"GL_SAMPLER_2D_ARRAY_SHADOW", GL_SAMPLER_2D_ARRAY_SHADOW},
        {"GL_SAMPLER_CUBE_SHADOW", GL_SAMPLER_CUBE_SHADOW},
        {"GL_UNSIGNED_INT_VEC2", GL_UNSIGNED_INT_VEC2},
        {"GL_UNSIGNED_INT_VEC3", GL_UNSIGNED_INT_VEC3},
        {"GL_UNSIGNED_INT_VEC4", GL_UNSIGNED_INT_VEC4},
        {"GL_INT_SAMPLER_2D", GL_INT_SAMPLER_2D},
        {"GL_INT_SAMPLER_3D", GL_INT_SAMPLER_3D},
        {"GL_INT_SAMPLER_CUBE", GL_INT_SAMPLER_CUBE},
        {"GL_INT_SAMPLER_2D_ARRAY", GL_INT_SAMPLER_2D_ARRAY},
        {"GL_UNSIGNED_INT_SAMPLER_2D", GL_UNSIGNED_INT_SAMPLER_2D},
        {"GL_UNSIGNED_INT_SAMPLER_3D", GL_UNSIGNED_INT_SAMPLER_3D},
        {"GL_UNSIGNED_INT_SAMPLER_CUBE", GL_UNSIGNED_INT_SAMPLER_CUBE},
        {"GL_UNSIGNED_INT_SAMPLER_2D_ARRAY", GL_UNSIGNED_INT_SAMPLER_2D_ARRAY},
        {"GL_BUFFER_ACCESS_FLAGS", GL_BUFFER_ACCESS_FLAGS},
        {"GL_BUFFER_MAP_LENGTH", GL_BUFFER_MAP_LENGTH},
        {"GL_BUFFER_MAP_OFFSET", GL_BUFFER_MAP_OFFSET},
        {"GL_DEPTH_COMPONENT32F", GL_DEPTH_COMPONENT32F},
        {"GL_DEPTH32F_STENCIL8", GL_DEPTH32F_STENCIL8},
        {"GL_FLOAT_32_UNSIGNED_INT_24_8_REV", GL_FLOAT_32_UNSIGNED_INT_24_8_REV},
        {"GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING", GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING},
        {"GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE", GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE},
        {"GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE", GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE", GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE", GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE", GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE", GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE", GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE},
        {"GL_FRAMEBUFFER_DEFAULT", GL_FRAMEBUFFER_DEFAULT},
        {"GL_FRAMEBUFFER_UNDEFINED", GL_FRAMEBUFFER_UNDEFINED},
        {"GL_DEPTH_STENCIL_ATTACHMENT", GL_DEPTH_STENCIL_ATTACHMENT},
        {"GL_DEPTH_STENCIL", GL_DEPTH_STENCIL},
        {"GL_UNSIGNED_INT_24_8", GL_UNSIGNED_INT_24_8},
        {"GL_DEPTH24_STENCIL8", GL_DEPTH24_STENCIL8},
        {"GL_UNSIGNED_NORMALIZED", GL_UNSIGNED_NORMALIZED},
        {"GL_DRAW_FRAMEBUFFER_BINDING", GL_DRAW_FRAMEBUFFER_BINDING},
        {"GL_READ_FRAMEBUFFER", GL_READ_FRAMEBUFFER},
        {"GL_DRAW_FRAMEBUFFER", GL_DRAW_FRAMEBUFFER},
        {"GL_READ_FRAMEBUFFER_BINDING", GL_READ_FRAMEBUFFER_BINDING},
        {"GL_RENDERBUFFER_SAMPLES", GL_RENDERBUFFER_SAMPLES},
        {"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER", GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER},
        {"GL_MAX_COLOR_ATTACHMENTS", GL_MAX_COLOR_ATTACHMENTS},
        {"GL_COLOR_ATTACHMENT1", GL_COLOR_ATTACHMENT1},
        {"GL_COLOR_ATTACHMENT2", GL_COLOR_ATTACHMENT2},
        {"GL_COLOR_ATTACHMENT3", GL_COLOR_ATTACHMENT3},
        {"GL_COLOR_ATTACHMENT4", GL_COLOR_ATTACHMENT4},
        {"GL_COLOR_ATTACHMENT5", GL_COLOR_ATTACHMENT5},
        {"GL_COLOR_ATTACHMENT6", GL_COLOR_ATTACHMENT6},
        {"GL_COLOR_ATTACHMENT7", GL_COLOR_ATTACHMENT7},
        {"GL_COLOR_ATTACHMENT8", GL_COLOR_ATTACHMENT8},
        {"GL_COLOR_ATTACHMENT9", GL_COLOR_ATTACHMENT9},
        {"GL_COLOR_ATTACHMENT10", GL_COLOR_ATTACHMENT10},
        {"GL_COLOR_ATTACHMENT11", GL_COLOR_ATTACHMENT11},
        {"GL_COLOR_ATTACHMENT12", GL_COLOR_ATTACHMENT12},
        {"GL_COLOR_ATTACHMENT13", GL_COLOR_ATTACHMENT13},
        {"GL_COLOR_ATTACHMENT14", GL_COLOR_ATTACHMENT14},
        {"GL_COLOR_ATTACHMENT15", GL_COLOR_ATTACHMENT15},
        {"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE", GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE},
        {"GL_MAX_SAMPLES", GL_MAX_SAMPLES},
        {"GL_HALF_FLOAT", GL_HALF_FLOAT},
        {"GL_MAP_READ_BIT", GL_MAP_READ_BIT},
        {"GL_MAP_WRITE_BIT", GL_MAP_WRITE_BIT},
        {"GL_MAP_INVALIDATE_RANGE_BIT", GL_MAP_INVALIDATE_RANGE_BIT},
        {"GL_MAP_INVALIDATE_BUFFER_BIT", GL_MAP_INVALIDATE_BUFFER_BIT},
        {"GL_MAP_FLUSH_EXPLICIT_BIT", GL_MAP_FLUSH_EXPLICIT_BIT},
        {"GL_MAP_UNSYNCHRONIZED_BIT", GL_MAP_UNSYNCHRONIZED_BIT},
        {"GL_RG", GL_RG},
        {"GL_RG_INTEGER", GL_RG_INTEGER},
        {"GL_R8", GL_R8},
        {"GL_RG8", GL_RG8},
        {"GL_R16F", GL_R16F},
        {"GL_R32F", GL_R32F},
        {"GL_RG16F", GL_RG16F},
        {"GL_RG32F", GL_RG32F},
        {"GL_R8I", GL_R8I},
        {"GL_R8UI", GL_R8UI},
        {"GL_R16I", GL_R16I},
        {"GL_R16UI", GL_R16UI},
        {"GL_R32I", GL_R32I},
        {"GL_R32UI", GL_R32UI},
        {"GL_RG8I", GL_RG8I},
        {"GL_RG8UI", GL_RG8UI},
        {"GL_RG16I", GL_RG16I},
        {"GL_RG16UI", GL_RG16UI},
        {"GL_RG32I", GL_RG32I},
        {"GL_RG32UI", GL_RG32UI},
        {"GL_VERTEX_ARRAY_BINDING", GL_VERTEX_ARRAY_BINDING},
        {"GL_R8_SNORM", GL_R8_SNORM},
        {"GL_RG8_SNORM", GL_RG8_SNORM},
        {"GL_RGB8_SNORM", GL_RGB8_SNORM},
        {"GL_RGBA8_SNORM", GL_RGBA8_SNORM},
        {"GL_SIGNED_NORMALIZED", GL_SIGNED_NORMALIZED},
        {"GL_PRIMITIVE_RESTART_FIXED_INDEX", GL_PRIMITIVE_RESTART_FIXED_INDEX},
        {"GL_COPY_READ_BUFFER", GL_COPY_READ_BUFFER},
        {"GL_COPY_WRITE_BUFFER", GL_COPY_WRITE_BUFFER},
        {"GL_COPY_READ_BUFFER_BINDING", GL_COPY_READ_BUFFER_BINDING},
        {"GL_COPY_WRITE_BUFFER_BINDING", GL_COPY_WRITE_BUFFER_BINDING},
        {"GL_UNIFORM_BUFFER", GL_UNIFORM_BUFFER},
        {"GL_UNIFORM_BUFFER_BINDING", GL_UNIFORM_BUFFER_BINDING},
        {"GL_UNIFORM_BUFFER_START", GL_UNIFORM_BUFFER_START},
        {"GL_UNIFORM_BUFFER_SIZE", GL_UNIFORM_BUFFER_SIZE},
        {"GL_MAX_VERTEX_UNIFORM_BLOCKS", GL_MAX_VERTEX_UNIFORM_BLOCKS},
        {"GL_MAX_FRAGMENT_UNIFORM_BLOCKS", GL_MAX_FRAGMENT_UNIFORM_BLOCKS},
        {"GL_MAX_COMBINED_UNIFORM_BLOCKS", GL_MAX_COMBINED_UNIFORM_BLOCKS},
        {"GL_MAX_UNIFORM_BUFFER_BINDINGS", GL_MAX_UNIFORM_BUFFER_BINDINGS},
        {"GL_MAX_UNIFORM_BLOCK_SIZE", GL_MAX_UNIFORM_BLOCK_SIZE},
        {"GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS", GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS},
        {"GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS", GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS},
        {"GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT", GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT},
        {"GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH", GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH},
        {"GL_ACTIVE_UNIFORM_BLOCKS", GL_ACTIVE_UNIFORM_BLOCKS},
        {"GL_UNIFORM_TYPE", GL_UNIFORM_TYPE},
        {"GL_UNIFORM_SIZE", GL_UNIFORM_SIZE},
        {"GL_UNIFORM_NAME_LENGTH", GL_UNIFORM_NAME_LENGTH},
        {"GL_UNIFORM_BLOCK_INDEX", GL_UNIFORM_BLOCK_INDEX},
        {"GL_UNIFORM_OFFSET", GL_UNIFORM_OFFSET},
        {"GL_UNIFORM_ARRAY_STRIDE", GL_UNIFORM_ARRAY_STRIDE},
        {"GL_UNIFORM_MATRIX_STRIDE", GL_UNIFORM_MATRIX_STRIDE},
        {"GL_UNIFORM_IS_ROW_MAJOR", GL_UNIFORM_IS_ROW_MAJOR},
        {"GL_UNIFORM_BLOCK_BINDING", GL_UNIFORM_BLOCK_BINDING},
        {"GL_UNIFORM_BLOCK_DATA_SIZE", GL_UNIFORM_BLOCK_DATA_SIZE},
        {"GL_UNIFORM_BLOCK_NAME_LENGTH", GL_UNIFORM_BLOCK_NAME_LENGTH},
        {"GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS", GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS},
        {"GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES", GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES},
        {"GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER", GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER},
        {"GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER", GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER},
        {"GL_INVALID_INDEX", GL_INVALID_INDEX},
        {"GL_MAX_VERTEX_OUTPUT_COMPONENTS", GL_MAX_VERTEX_OUTPUT_COMPONENTS},
        {"GL_MAX_FRAGMENT_INPUT_COMPONENTS", GL_MAX_FRAGMENT_INPUT_COMPONENTS},
        {"GL_MAX_SERVER_WAIT_TIMEOUT", GL_MAX_SERVER_WAIT_TIMEOUT},
        {"GL_OBJECT_TYPE", GL_OBJECT_TYPE},
        {"GL_SYNC_CONDITION", GL_SYNC_CONDITION},
        {"GL_SYNC_STATUS", GL_SYNC_STATUS},
        {"GL_SYNC_FLAGS", GL_SYNC_FLAGS},
        {"GL_SYNC_FENCE", GL_SYNC_FENCE},
        {"GL_SYNC_GPU_COMMANDS_COMPLETE", GL_SYNC_GPU_COMMANDS_COMPLETE},
        {"GL_UNSIGNALED", GL_UNSIGNALED},
        {"GL_SIGNALED", GL_SIGNALED},
        {"GL_ALREADY_SIGNALED", GL_ALREADY_SIGNALED},
        {"GL_TIMEOUT_EXPIRED", GL_TIMEOUT_EXPIRED},
        {"GL_CONDITION_SATISFIED", GL_CONDITION_SATISFIED},
        {"GL_WAIT_FAILED", GL_WAIT_FAILED},
        {"GL_SYNC_FLUSH_COMMANDS_BIT", GL_SYNC_FLUSH_COMMANDS_BIT},
        {"GL_TIMEOUT_IGNORED", GL_TIMEOUT_IGNORED},
        {"GL_VERTEX_ATTRIB_ARRAY_DIVISOR", GL_VERTEX_ATTRIB_ARRAY_DIVISOR},
        {"GL_ANY_SAMPLES_PASSED", GL_ANY_SAMPLES_PASSED},
        {"GL_ANY_SAMPLES_PASSED_CONSERVATIVE", GL_ANY_SAMPLES_PASSED_CONSERVATIVE},
        {"GL_SAMPLER_BINDING", GL_SAMPLER_BINDING},
        {"GL_RGB10_A2UI", GL_RGB10_A2UI},
        {"GL_TEXTURE_SWIZZLE_R", GL_TEXTURE_SWIZZLE_R},
        {"GL_TEXTURE_SWIZZLE_G", GL_TEXTURE_SWIZZLE_G},
        {"GL_TEXTURE_SWIZZLE_B", GL_TEXTURE_SWIZZLE_B},
        {"GL_TEXTURE_SWIZZLE_A", GL_TEXTURE_SWIZZLE_A},
        {"GL_GREEN", GL_GREEN},
        {"GL_BLUE", GL_BLUE},
        {"GL_INT_2_10_10_10_REV", GL_INT_2_10_10_10_REV},
        {"GL_TRANSFORM_FEEDBACK", GL_TRANSFORM_FEEDBACK},
        {"GL_TRANSFORM_FEEDBACK_PAUSED", GL_TRANSFORM_FEEDBACK_PAUSED},
        {"GL_TRANSFORM_FEEDBACK_ACTIVE", GL_TRANSFORM_FEEDBACK_ACTIVE},
        {"GL_TRANSFORM_FEEDBACK_BINDING", GL_TRANSFORM_FEEDBACK_BINDING},
        {"GL_PROGRAM_BINARY_RETRIEVABLE_HINT", GL_PROGRAM_BINARY_RETRIEVABLE_HINT},
        {"GL_PROGRAM_BINARY_LENGTH", GL_PROGRAM_BINARY_LENGTH},
        {"GL_NUM_PROGRAM_BINARY_FORMATS", GL_NUM_PROGRAM_BINARY_FORMATS},
        {"GL_PROGRAM_BINARY_FORMATS", GL_PROGRAM_BINARY_FORMATS},
        {"GL_COMPRESSED_R11_EAC", GL_COMPRESSED_R11_EAC},
        {"GL_COMPRESSED_SIGNED_R11_EAC", GL_COMPRESSED_SIGNED_R11_EAC},
        {"GL_COMPRESSED_RG11_EAC", GL_COMPRESSED_RG11_EAC},
        {"GL_COMPRESSED_SIGNED_RG11_EAC", GL_COMPRESSED_SIGNED_RG11_EAC},
        {"GL_COMPRESSED_RGB8_ETC2", GL_COMPRESSED_RGB8_ETC2},
        {"GL_COMPRESSED_SRGB8_ETC2", GL_COMPRESSED_SRGB8_ETC2},
        {"GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2", GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2},
        {"GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2", GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2},
        {"GL_COMPRESSED_RGBA8_ETC2_EAC", GL_COMPRESSED_RGBA8_ETC2_EAC},
        {"GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC", GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC},
        {"GL_TEXTURE_IMMUTABLE_FORMAT", GL_TEXTURE_IMMUTABLE_FORMAT},
        {"GL_MAX_ELEMENT_INDEX", GL_MAX_ELEMENT_INDEX},
        {"GL_NUM_SAMPLE_COUNTS", GL_NUM_SAMPLE_COUNTS},
        {"GL_TEXTURE_IMMUTABLE_LEVELS", GL_TEXTURE_IMMUTABLE_LEVELS},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ES_VERSION_3_0 */
#endif /* _PYCGLES2_GL_ES_VERSION_3_0_H_ */

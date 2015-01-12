#ifndef _PYCGLES2_GL_ES_VERSION_2_0_H_
#define _PYCGLES2_GL_ES_VERSION_2_0_H_
#ifdef GL_ES_VERSION_2_0
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glActiveTexture */
static PyObject *
PyCGLES2_glActiveTexture(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glActiveTexture (GLenum texture) */
    PyErr_SetString(PyExc_NotImplementedError, "glActiveTexture");
    return NULL;
}


/* TODO(NotImplemented): glAttachShader */
static PyObject *
PyCGLES2_glAttachShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glAttachShader (GLuint program, GLuint shader) */
    PyErr_SetString(PyExc_NotImplementedError, "glAttachShader");
    return NULL;
}


/* TODO(NotImplemented): glBindAttribLocation */
static PyObject *
PyCGLES2_glBindAttribLocation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindAttribLocation");
    return NULL;
}


/* TODO(NotImplemented): glBindBuffer */
static PyObject *
PyCGLES2_glBindBuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindBuffer (GLenum target, GLuint buffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindBuffer");
    return NULL;
}


/* TODO(NotImplemented): glBindFramebuffer */
static PyObject *
PyCGLES2_glBindFramebuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindFramebuffer (GLenum target, GLuint framebuffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindFramebuffer");
    return NULL;
}


/* TODO(NotImplemented): glBindRenderbuffer */
static PyObject *
PyCGLES2_glBindRenderbuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindRenderbuffer (GLenum target, GLuint renderbuffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindRenderbuffer");
    return NULL;
}


/* TODO(NotImplemented): glBindTexture */
static PyObject *
PyCGLES2_glBindTexture(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindTexture (GLenum target, GLuint texture) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindTexture");
    return NULL;
}


/* TODO(NotImplemented): glBlendColor */
static PyObject *
PyCGLES2_glBlendColor(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendColor");
    return NULL;
}


/* TODO(NotImplemented): glBlendEquation */
static PyObject *
PyCGLES2_glBlendEquation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendEquation (GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendEquation");
    return NULL;
}


/* TODO(NotImplemented): glBlendEquationSeparate */
static PyObject *
PyCGLES2_glBlendEquationSeparate(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendEquationSeparate");
    return NULL;
}


/* TODO(NotImplemented): glBlendFunc */
static PyObject *
PyCGLES2_glBlendFunc(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendFunc (GLenum sfactor, GLenum dfactor) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendFunc");
    return NULL;
}


/* TODO(NotImplemented): glBlendFuncSeparate */
static PyObject *
PyCGLES2_glBlendFuncSeparate(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glBlendFuncSeparate");
    return NULL;
}


/* TODO(NotImplemented): glBufferData */
static PyObject *
PyCGLES2_glBufferData(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage) */
    PyErr_SetString(PyExc_NotImplementedError, "glBufferData");
    return NULL;
}


/* TODO(NotImplemented): glBufferSubData */
static PyObject *
PyCGLES2_glBufferSubData(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glBufferSubData");
    return NULL;
}


/* TODO(NotImplemented): glCheckFramebufferStatus */
static PyObject *
PyCGLES2_glCheckFramebufferStatus(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glCheckFramebufferStatus (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glCheckFramebufferStatus");
    return NULL;
}


/* TODO(NotImplemented): glClear */
static PyObject *
PyCGLES2_glClear(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClear (GLbitfield mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glClear");
    return NULL;
}


/* TODO(NotImplemented): glClearColor */
static PyObject *
PyCGLES2_glClearColor(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearColor");
    return NULL;
}


/* TODO(NotImplemented): glClearDepthf */
static PyObject *
PyCGLES2_glClearDepthf(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearDepthf (GLfloat d) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearDepthf");
    return NULL;
}


/* TODO(NotImplemented): glClearStencil */
static PyObject *
PyCGLES2_glClearStencil(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glClearStencil (GLint s) */
    PyErr_SetString(PyExc_NotImplementedError, "glClearStencil");
    return NULL;
}


/* TODO(NotImplemented): glColorMask */
static PyObject *
PyCGLES2_glColorMask(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) */
    PyErr_SetString(PyExc_NotImplementedError, "glColorMask");
    return NULL;
}


/* TODO(NotImplemented): glCompileShader */
static PyObject *
PyCGLES2_glCompileShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompileShader (GLuint shader) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompileShader");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexImage2D */
static PyObject *
PyCGLES2_glCompressedTexImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexImage2D");
    return NULL;
}


/* TODO(NotImplemented): glCompressedTexSubImage2D */
static PyObject *
PyCGLES2_glCompressedTexSubImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glCompressedTexSubImage2D");
    return NULL;
}


/* TODO(NotImplemented): glCopyTexImage2D */
static PyObject *
PyCGLES2_glCopyTexImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyTexImage2D");
    return NULL;
}


/* TODO(NotImplemented): glCopyTexSubImage2D */
static PyObject *
PyCGLES2_glCopyTexSubImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyTexSubImage2D");
    return NULL;
}


/* TODO(NotImplemented): glCreateProgram */
static PyObject *
PyCGLES2_glCreateProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glCreateProgram () */
    PyErr_SetString(PyExc_NotImplementedError, "glCreateProgram");
    return NULL;
}


/* TODO(NotImplemented): glCreateShader */
static PyObject *
PyCGLES2_glCreateShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glCreateShader (GLenum type) */
    PyErr_SetString(PyExc_NotImplementedError, "glCreateShader");
    return NULL;
}


/* TODO(NotImplemented): glCullFace */
static PyObject *
PyCGLES2_glCullFace(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCullFace (GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glCullFace");
    return NULL;
}


/* TODO(NotImplemented): glDeleteBuffers */
static PyObject *
PyCGLES2_glDeleteBuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteBuffers (GLsizei n, const GLuint *buffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteBuffers");
    return NULL;
}


/* TODO(NotImplemented): glDeleteFramebuffers */
static PyObject *
PyCGLES2_glDeleteFramebuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteFramebuffers");
    return NULL;
}


/* TODO(NotImplemented): glDeleteProgram */
static PyObject *
PyCGLES2_glDeleteProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteProgram (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteProgram");
    return NULL;
}


/* TODO(NotImplemented): glDeleteRenderbuffers */
static PyObject *
PyCGLES2_glDeleteRenderbuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteRenderbuffers");
    return NULL;
}


/* TODO(NotImplemented): glDeleteShader */
static PyObject *
PyCGLES2_glDeleteShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteShader (GLuint shader) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteShader");
    return NULL;
}


/* TODO(NotImplemented): glDeleteTextures */
static PyObject *
PyCGLES2_glDeleteTextures(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteTextures (GLsizei n, const GLuint *textures) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteTextures");
    return NULL;
}


/* TODO(NotImplemented): glDepthFunc */
static PyObject *
PyCGLES2_glDepthFunc(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDepthFunc (GLenum func) */
    PyErr_SetString(PyExc_NotImplementedError, "glDepthFunc");
    return NULL;
}


/* TODO(NotImplemented): glDepthMask */
static PyObject *
PyCGLES2_glDepthMask(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDepthMask (GLboolean flag) */
    PyErr_SetString(PyExc_NotImplementedError, "glDepthMask");
    return NULL;
}


/* TODO(NotImplemented): glDepthRangef */
static PyObject *
PyCGLES2_glDepthRangef(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDepthRangef (GLfloat n, GLfloat f) */
    PyErr_SetString(PyExc_NotImplementedError, "glDepthRangef");
    return NULL;
}


/* TODO(NotImplemented): glDetachShader */
static PyObject *
PyCGLES2_glDetachShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDetachShader (GLuint program, GLuint shader) */
    PyErr_SetString(PyExc_NotImplementedError, "glDetachShader");
    return NULL;
}


/* TODO(NotImplemented): glDisable */
static PyObject *
PyCGLES2_glDisable(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDisable (GLenum cap) */
    PyErr_SetString(PyExc_NotImplementedError, "glDisable");
    return NULL;
}


/* TODO(NotImplemented): glDisableVertexAttribArray */
static PyObject *
PyCGLES2_glDisableVertexAttribArray(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDisableVertexAttribArray (GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glDisableVertexAttribArray");
    return NULL;
}


/* TODO(NotImplemented): glDrawArrays */
static PyObject *
PyCGLES2_glDrawArrays(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArrays (GLenum mode, GLint first, GLsizei count) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArrays");
    return NULL;
}


/* TODO(NotImplemented): glDrawElements */
static PyObject *
PyCGLES2_glDrawElements(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElements");
    return NULL;
}


/* TODO(NotImplemented): glEnable */
static PyObject *
PyCGLES2_glEnable(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEnable (GLenum cap) */
    PyErr_SetString(PyExc_NotImplementedError, "glEnable");
    return NULL;
}


/* TODO(NotImplemented): glEnableVertexAttribArray */
static PyObject *
PyCGLES2_glEnableVertexAttribArray(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEnableVertexAttribArray (GLuint index) */
    PyErr_SetString(PyExc_NotImplementedError, "glEnableVertexAttribArray");
    return NULL;
}


/* TODO(NotImplemented): glFinish */
static PyObject *
PyCGLES2_glFinish(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFinish () */
    PyErr_SetString(PyExc_NotImplementedError, "glFinish");
    return NULL;
}


/* TODO(NotImplemented): glFlush */
static PyObject *
PyCGLES2_glFlush(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFlush () */
    PyErr_SetString(PyExc_NotImplementedError, "glFlush");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferRenderbuffer */
static PyObject *
PyCGLES2_glFramebufferRenderbuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferRenderbuffer");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferTexture2D */
static PyObject *
PyCGLES2_glFramebufferTexture2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferTexture2D");
    return NULL;
}


/* TODO(NotImplemented): glFrontFace */
static PyObject *
PyCGLES2_glFrontFace(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFrontFace (GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glFrontFace");
    return NULL;
}


/* TODO(NotImplemented): glGenBuffers */
static PyObject *
PyCGLES2_glGenBuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenBuffers (GLsizei n, GLuint *buffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenBuffers");
    return NULL;
}


/* TODO(NotImplemented): glGenerateMipmap */
static PyObject *
PyCGLES2_glGenerateMipmap(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenerateMipmap (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenerateMipmap");
    return NULL;
}


/* TODO(NotImplemented): glGenFramebuffers */
static PyObject *
PyCGLES2_glGenFramebuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenFramebuffers (GLsizei n, GLuint *framebuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenFramebuffers");
    return NULL;
}


/* TODO(NotImplemented): glGenRenderbuffers */
static PyObject *
PyCGLES2_glGenRenderbuffers(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenRenderbuffers (GLsizei n, GLuint *renderbuffers) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenRenderbuffers");
    return NULL;
}


/* TODO(NotImplemented): glGenTextures */
static PyObject *
PyCGLES2_glGenTextures(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenTextures (GLsizei n, GLuint *textures) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenTextures");
    return NULL;
}


/* TODO(NotImplemented): glGetActiveAttrib */
static PyObject *
PyCGLES2_glGetActiveAttrib(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetActiveAttrib");
    return NULL;
}


/* TODO(NotImplemented): glGetActiveUniform */
static PyObject *
PyCGLES2_glGetActiveUniform(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetActiveUniform");
    return NULL;
}


/* TODO(NotImplemented): glGetAttachedShaders */
static PyObject *
PyCGLES2_glGetAttachedShaders(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetAttachedShaders");
    return NULL;
}


/* TODO(NotImplemented): glGetAttribLocation */
static PyObject *
PyCGLES2_glGetAttribLocation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLint glGetAttribLocation (GLuint program, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetAttribLocation");
    return NULL;
}


/* TODO(NotImplemented): glGetBooleanv */
static PyObject *
PyCGLES2_glGetBooleanv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBooleanv (GLenum pname, GLboolean *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBooleanv");
    return NULL;
}


/* TODO(NotImplemented): glGetBufferParameteriv */
static PyObject *
PyCGLES2_glGetBufferParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBufferParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetError */
static PyObject *
PyCGLES2_glGetError(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glGetError () */
    PyErr_SetString(PyExc_NotImplementedError, "glGetError");
    return NULL;
}


/* TODO(NotImplemented): glGetFloatv */
static PyObject *
PyCGLES2_glGetFloatv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFloatv (GLenum pname, GLfloat *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFloatv");
    return NULL;
}


/* TODO(NotImplemented): glGetFramebufferAttachmentParameteriv */
static PyObject *
PyCGLES2_glGetFramebufferAttachmentParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFramebufferAttachmentParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetIntegerv */
static PyObject *
PyCGLES2_glGetIntegerv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetIntegerv (GLenum pname, GLint *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetIntegerv");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramiv */
static PyObject *
PyCGLES2_glGetProgramiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramiv (GLuint program, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramiv");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramInfoLog */
static PyObject *
PyCGLES2_glGetProgramInfoLog(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramInfoLog");
    return NULL;
}


/* TODO(NotImplemented): glGetRenderbufferParameteriv */
static PyObject *
PyCGLES2_glGetRenderbufferParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetRenderbufferParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetShaderiv */
static PyObject *
PyCGLES2_glGetShaderiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetShaderiv (GLuint shader, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetShaderiv");
    return NULL;
}


/* TODO(NotImplemented): glGetShaderInfoLog */
static PyObject *
PyCGLES2_glGetShaderInfoLog(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetShaderInfoLog");
    return NULL;
}


/* TODO(NotImplemented): glGetShaderPrecisionFormat */
static PyObject *
PyCGLES2_glGetShaderPrecisionFormat(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetShaderPrecisionFormat");
    return NULL;
}


/* TODO(NotImplemented): glGetShaderSource */
static PyObject *
PyCGLES2_glGetShaderSource(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetShaderSource");
    return NULL;
}


/* TODO(NotImplemented): glGetString */
static PyObject *
PyCGLES2_glGetString(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* const GLubyte *glGetString (GLenum name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetString");
    return NULL;
}


/* TODO(NotImplemented): glGetTexParameterfv */
static PyObject *
PyCGLES2_glGetTexParameterfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexParameterfv");
    return NULL;
}


/* TODO(NotImplemented): glGetTexParameteriv */
static PyObject *
PyCGLES2_glGetTexParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformfv */
static PyObject *
PyCGLES2_glGetUniformfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetUniformfv (GLuint program, GLint location, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformfv");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformiv */
static PyObject *
PyCGLES2_glGetUniformiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetUniformiv (GLuint program, GLint location, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformiv");
    return NULL;
}


/* TODO(NotImplemented): glGetUniformLocation */
static PyObject *
PyCGLES2_glGetUniformLocation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLint glGetUniformLocation (GLuint program, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetUniformLocation");
    return NULL;
}


/* TODO(NotImplemented): glGetVertexAttribfv */
static PyObject *
PyCGLES2_glGetVertexAttribfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetVertexAttribfv");
    return NULL;
}


/* TODO(NotImplemented): glGetVertexAttribiv */
static PyObject *
PyCGLES2_glGetVertexAttribiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetVertexAttribiv");
    return NULL;
}


/* TODO(NotImplemented): glGetVertexAttribPointerv */
static PyObject *
PyCGLES2_glGetVertexAttribPointerv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetVertexAttribPointerv");
    return NULL;
}


/* TODO(NotImplemented): glHint */
static PyObject *
PyCGLES2_glHint(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glHint (GLenum target, GLenum mode) */
    PyErr_SetString(PyExc_NotImplementedError, "glHint");
    return NULL;
}


/* TODO(NotImplemented): glIsBuffer */
static PyObject *
PyCGLES2_glIsBuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsBuffer (GLuint buffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsBuffer");
    return NULL;
}


/* TODO(NotImplemented): glIsEnabled */
static PyObject *
PyCGLES2_glIsEnabled(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsEnabled (GLenum cap) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsEnabled");
    return NULL;
}


/* TODO(NotImplemented): glIsFramebuffer */
static PyObject *
PyCGLES2_glIsFramebuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsFramebuffer (GLuint framebuffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsFramebuffer");
    return NULL;
}


/* TODO(NotImplemented): glIsProgram */
static PyObject *
PyCGLES2_glIsProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsProgram (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsProgram");
    return NULL;
}


/* TODO(NotImplemented): glIsRenderbuffer */
static PyObject *
PyCGLES2_glIsRenderbuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsRenderbuffer (GLuint renderbuffer) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsRenderbuffer");
    return NULL;
}


/* TODO(NotImplemented): glIsShader */
static PyObject *
PyCGLES2_glIsShader(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsShader (GLuint shader) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsShader");
    return NULL;
}


/* TODO(NotImplemented): glIsTexture */
static PyObject *
PyCGLES2_glIsTexture(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsTexture (GLuint texture) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsTexture");
    return NULL;
}


/* TODO(NotImplemented): glLineWidth */
static PyObject *
PyCGLES2_glLineWidth(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glLineWidth (GLfloat width) */
    PyErr_SetString(PyExc_NotImplementedError, "glLineWidth");
    return NULL;
}


/* TODO(NotImplemented): glLinkProgram */
static PyObject *
PyCGLES2_glLinkProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glLinkProgram (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glLinkProgram");
    return NULL;
}


/* TODO(NotImplemented): glPixelStorei */
static PyObject *
PyCGLES2_glPixelStorei(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPixelStorei (GLenum pname, GLint param) */
    PyErr_SetString(PyExc_NotImplementedError, "glPixelStorei");
    return NULL;
}


/* TODO(NotImplemented): glPolygonOffset */
static PyObject *
PyCGLES2_glPolygonOffset(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPolygonOffset (GLfloat factor, GLfloat units) */
    PyErr_SetString(PyExc_NotImplementedError, "glPolygonOffset");
    return NULL;
}


/* TODO(NotImplemented): glReadPixels */
static PyObject *
PyCGLES2_glReadPixels(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glReadPixels");
    return NULL;
}


/* TODO(NotImplemented): glReleaseShaderCompiler */
static PyObject *
PyCGLES2_glReleaseShaderCompiler(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glReleaseShaderCompiler () */
    PyErr_SetString(PyExc_NotImplementedError, "glReleaseShaderCompiler");
    return NULL;
}


/* TODO(NotImplemented): glRenderbufferStorage */
static PyObject *
PyCGLES2_glRenderbufferStorage(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glRenderbufferStorage");
    return NULL;
}


/* TODO(NotImplemented): glSampleCoverage */
static PyObject *
PyCGLES2_glSampleCoverage(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSampleCoverage (GLfloat value, GLboolean invert) */
    PyErr_SetString(PyExc_NotImplementedError, "glSampleCoverage");
    return NULL;
}


/* TODO(NotImplemented): glScissor */
static PyObject *
PyCGLES2_glScissor(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glScissor (GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glScissor");
    return NULL;
}


/* TODO(NotImplemented): glShaderBinary */
static PyObject *
PyCGLES2_glShaderBinary(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) */
    PyErr_SetString(PyExc_NotImplementedError, "glShaderBinary");
    return NULL;
}


/* TODO(NotImplemented): glShaderSource */
static PyObject *
PyCGLES2_glShaderSource(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) */
    PyErr_SetString(PyExc_NotImplementedError, "glShaderSource");
    return NULL;
}


/* TODO(NotImplemented): glStencilFunc */
static PyObject *
PyCGLES2_glStencilFunc(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilFunc (GLenum func, GLint ref, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilFunc");
    return NULL;
}


/* TODO(NotImplemented): glStencilFuncSeparate */
static PyObject *
PyCGLES2_glStencilFuncSeparate(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilFuncSeparate");
    return NULL;
}


/* TODO(NotImplemented): glStencilMask */
static PyObject *
PyCGLES2_glStencilMask(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilMask (GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilMask");
    return NULL;
}


/* TODO(NotImplemented): glStencilMaskSeparate */
static PyObject *
PyCGLES2_glStencilMaskSeparate(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilMaskSeparate (GLenum face, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilMaskSeparate");
    return NULL;
}


/* TODO(NotImplemented): glStencilOp */
static PyObject *
PyCGLES2_glStencilOp(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilOp");
    return NULL;
}


/* TODO(NotImplemented): glStencilOpSeparate */
static PyObject *
PyCGLES2_glStencilOpSeparate(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilOpSeparate");
    return NULL;
}


/* TODO(NotImplemented): glTexImage2D */
static PyObject *
PyCGLES2_glTexImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexImage2D");
    return NULL;
}


/* TODO(NotImplemented): glTexParameterf */
static PyObject *
PyCGLES2_glTexParameterf(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameterf (GLenum target, GLenum pname, GLfloat param) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameterf");
    return NULL;
}


/* TODO(NotImplemented): glTexParameterfv */
static PyObject *
PyCGLES2_glTexParameterfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameterfv");
    return NULL;
}


/* TODO(NotImplemented): glTexParameteri */
static PyObject *
PyCGLES2_glTexParameteri(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameteri (GLenum target, GLenum pname, GLint param) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameteri");
    return NULL;
}


/* TODO(NotImplemented): glTexParameteriv */
static PyObject *
PyCGLES2_glTexParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexParameteriv (GLenum target, GLenum pname, const GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glTexSubImage2D */
static PyObject *
PyCGLES2_glTexSubImage2D(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexSubImage2D");
    return NULL;
}


/* TODO(NotImplemented): glUniform1f */
static PyObject *
PyCGLES2_glUniform1f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1f (GLint location, GLfloat v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1f");
    return NULL;
}


/* TODO(NotImplemented): glUniform1fv */
static PyObject *
PyCGLES2_glUniform1fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1fv (GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1fv");
    return NULL;
}


/* TODO(NotImplemented): glUniform1i */
static PyObject *
PyCGLES2_glUniform1i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1i (GLint location, GLint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1i");
    return NULL;
}


/* TODO(NotImplemented): glUniform1iv */
static PyObject *
PyCGLES2_glUniform1iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform1iv (GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform1iv");
    return NULL;
}


/* TODO(NotImplemented): glUniform2f */
static PyObject *
PyCGLES2_glUniform2f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2f (GLint location, GLfloat v0, GLfloat v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2f");
    return NULL;
}


/* TODO(NotImplemented): glUniform2fv */
static PyObject *
PyCGLES2_glUniform2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2fv (GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2fv");
    return NULL;
}


/* TODO(NotImplemented): glUniform2i */
static PyObject *
PyCGLES2_glUniform2i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2i (GLint location, GLint v0, GLint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2i");
    return NULL;
}


/* TODO(NotImplemented): glUniform2iv */
static PyObject *
PyCGLES2_glUniform2iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform2iv (GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform2iv");
    return NULL;
}


/* TODO(NotImplemented): glUniform3f */
static PyObject *
PyCGLES2_glUniform3f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3f");
    return NULL;
}


/* TODO(NotImplemented): glUniform3fv */
static PyObject *
PyCGLES2_glUniform3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3fv (GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3fv");
    return NULL;
}


/* TODO(NotImplemented): glUniform3i */
static PyObject *
PyCGLES2_glUniform3i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3i");
    return NULL;
}


/* TODO(NotImplemented): glUniform3iv */
static PyObject *
PyCGLES2_glUniform3iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform3iv (GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform3iv");
    return NULL;
}


/* TODO(NotImplemented): glUniform4f */
static PyObject *
PyCGLES2_glUniform4f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4f");
    return NULL;
}


/* TODO(NotImplemented): glUniform4fv */
static PyObject *
PyCGLES2_glUniform4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4fv (GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4fv");
    return NULL;
}


/* TODO(NotImplemented): glUniform4i */
static PyObject *
PyCGLES2_glUniform4i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4i");
    return NULL;
}


/* TODO(NotImplemented): glUniform4iv */
static PyObject *
PyCGLES2_glUniform4iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniform4iv (GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniform4iv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix2fv */
static PyObject *
PyCGLES2_glUniformMatrix2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix2fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix3fv */
static PyObject *
PyCGLES2_glUniformMatrix3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix3fv");
    return NULL;
}


/* TODO(NotImplemented): glUniformMatrix4fv */
static PyObject *
PyCGLES2_glUniformMatrix4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glUniformMatrix4fv");
    return NULL;
}


/* TODO(NotImplemented): glUseProgram */
static PyObject *
PyCGLES2_glUseProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUseProgram (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glUseProgram");
    return NULL;
}


/* TODO(NotImplemented): glValidateProgram */
static PyObject *
PyCGLES2_glValidateProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glValidateProgram (GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glValidateProgram");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib1f */
static PyObject *
PyCGLES2_glVertexAttrib1f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib1f (GLuint index, GLfloat x) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib1f");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib1fv */
static PyObject *
PyCGLES2_glVertexAttrib1fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib1fv (GLuint index, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib1fv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib2f */
static PyObject *
PyCGLES2_glVertexAttrib2f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib2f");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib2fv */
static PyObject *
PyCGLES2_glVertexAttrib2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib2fv (GLuint index, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib2fv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib3f */
static PyObject *
PyCGLES2_glVertexAttrib3f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib3f");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib3fv */
static PyObject *
PyCGLES2_glVertexAttrib3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib3fv (GLuint index, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib3fv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib4f */
static PyObject *
PyCGLES2_glVertexAttrib4f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib4f");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttrib4fv */
static PyObject *
PyCGLES2_glVertexAttrib4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttrib4fv (GLuint index, const GLfloat *v) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttrib4fv");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribPointer */
static PyObject *
PyCGLES2_glVertexAttribPointer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribPointer");
    return NULL;
}


/* TODO(NotImplemented): glViewport */
static PyObject *
PyCGLES2_glViewport(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glViewport (GLint x, GLint y, GLsizei width, GLsizei height) */
    PyErr_SetString(PyExc_NotImplementedError, "glViewport");
    return NULL;
}


static int
PyCGLES2_GL_ES_VERSION_2_0(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_DEPTH_BUFFER_BIT", GL_DEPTH_BUFFER_BIT},
        {"GL_STENCIL_BUFFER_BIT", GL_STENCIL_BUFFER_BIT},
        {"GL_COLOR_BUFFER_BIT", GL_COLOR_BUFFER_BIT},
        {"GL_FALSE", GL_FALSE},
        {"GL_TRUE", GL_TRUE},
        {"GL_POINTS", GL_POINTS},
        {"GL_LINES", GL_LINES},
        {"GL_LINE_LOOP", GL_LINE_LOOP},
        {"GL_LINE_STRIP", GL_LINE_STRIP},
        {"GL_TRIANGLES", GL_TRIANGLES},
        {"GL_TRIANGLE_STRIP", GL_TRIANGLE_STRIP},
        {"GL_TRIANGLE_FAN", GL_TRIANGLE_FAN},
        {"GL_ZERO", GL_ZERO},
        {"GL_ONE", GL_ONE},
        {"GL_SRC_COLOR", GL_SRC_COLOR},
        {"GL_ONE_MINUS_SRC_COLOR", GL_ONE_MINUS_SRC_COLOR},
        {"GL_SRC_ALPHA", GL_SRC_ALPHA},
        {"GL_ONE_MINUS_SRC_ALPHA", GL_ONE_MINUS_SRC_ALPHA},
        {"GL_DST_ALPHA", GL_DST_ALPHA},
        {"GL_ONE_MINUS_DST_ALPHA", GL_ONE_MINUS_DST_ALPHA},
        {"GL_DST_COLOR", GL_DST_COLOR},
        {"GL_ONE_MINUS_DST_COLOR", GL_ONE_MINUS_DST_COLOR},
        {"GL_SRC_ALPHA_SATURATE", GL_SRC_ALPHA_SATURATE},
        {"GL_FUNC_ADD", GL_FUNC_ADD},
        {"GL_BLEND_EQUATION", GL_BLEND_EQUATION},
        {"GL_BLEND_EQUATION_RGB", GL_BLEND_EQUATION_RGB},
        {"GL_BLEND_EQUATION_ALPHA", GL_BLEND_EQUATION_ALPHA},
        {"GL_FUNC_SUBTRACT", GL_FUNC_SUBTRACT},
        {"GL_FUNC_REVERSE_SUBTRACT", GL_FUNC_REVERSE_SUBTRACT},
        {"GL_BLEND_DST_RGB", GL_BLEND_DST_RGB},
        {"GL_BLEND_SRC_RGB", GL_BLEND_SRC_RGB},
        {"GL_BLEND_DST_ALPHA", GL_BLEND_DST_ALPHA},
        {"GL_BLEND_SRC_ALPHA", GL_BLEND_SRC_ALPHA},
        {"GL_CONSTANT_COLOR", GL_CONSTANT_COLOR},
        {"GL_ONE_MINUS_CONSTANT_COLOR", GL_ONE_MINUS_CONSTANT_COLOR},
        {"GL_CONSTANT_ALPHA", GL_CONSTANT_ALPHA},
        {"GL_ONE_MINUS_CONSTANT_ALPHA", GL_ONE_MINUS_CONSTANT_ALPHA},
        {"GL_BLEND_COLOR", GL_BLEND_COLOR},
        {"GL_ARRAY_BUFFER", GL_ARRAY_BUFFER},
        {"GL_ELEMENT_ARRAY_BUFFER", GL_ELEMENT_ARRAY_BUFFER},
        {"GL_ARRAY_BUFFER_BINDING", GL_ARRAY_BUFFER_BINDING},
        {"GL_ELEMENT_ARRAY_BUFFER_BINDING", GL_ELEMENT_ARRAY_BUFFER_BINDING},
        {"GL_STREAM_DRAW", GL_STREAM_DRAW},
        {"GL_STATIC_DRAW", GL_STATIC_DRAW},
        {"GL_DYNAMIC_DRAW", GL_DYNAMIC_DRAW},
        {"GL_BUFFER_SIZE", GL_BUFFER_SIZE},
        {"GL_BUFFER_USAGE", GL_BUFFER_USAGE},
        {"GL_CURRENT_VERTEX_ATTRIB", GL_CURRENT_VERTEX_ATTRIB},
        {"GL_FRONT", GL_FRONT},
        {"GL_BACK", GL_BACK},
        {"GL_FRONT_AND_BACK", GL_FRONT_AND_BACK},
        {"GL_TEXTURE_2D", GL_TEXTURE_2D},
        {"GL_CULL_FACE", GL_CULL_FACE},
        {"GL_BLEND", GL_BLEND},
        {"GL_DITHER", GL_DITHER},
        {"GL_STENCIL_TEST", GL_STENCIL_TEST},
        {"GL_DEPTH_TEST", GL_DEPTH_TEST},
        {"GL_SCISSOR_TEST", GL_SCISSOR_TEST},
        {"GL_POLYGON_OFFSET_FILL", GL_POLYGON_OFFSET_FILL},
        {"GL_SAMPLE_ALPHA_TO_COVERAGE", GL_SAMPLE_ALPHA_TO_COVERAGE},
        {"GL_SAMPLE_COVERAGE", GL_SAMPLE_COVERAGE},
        {"GL_NO_ERROR", GL_NO_ERROR},
        {"GL_INVALID_ENUM", GL_INVALID_ENUM},
        {"GL_INVALID_VALUE", GL_INVALID_VALUE},
        {"GL_INVALID_OPERATION", GL_INVALID_OPERATION},
        {"GL_OUT_OF_MEMORY", GL_OUT_OF_MEMORY},
        {"GL_CW", GL_CW},
        {"GL_CCW", GL_CCW},
        {"GL_LINE_WIDTH", GL_LINE_WIDTH},
        {"GL_ALIASED_POINT_SIZE_RANGE", GL_ALIASED_POINT_SIZE_RANGE},
        {"GL_ALIASED_LINE_WIDTH_RANGE", GL_ALIASED_LINE_WIDTH_RANGE},
        {"GL_CULL_FACE_MODE", GL_CULL_FACE_MODE},
        {"GL_FRONT_FACE", GL_FRONT_FACE},
        {"GL_DEPTH_RANGE", GL_DEPTH_RANGE},
        {"GL_DEPTH_WRITEMASK", GL_DEPTH_WRITEMASK},
        {"GL_DEPTH_CLEAR_VALUE", GL_DEPTH_CLEAR_VALUE},
        {"GL_DEPTH_FUNC", GL_DEPTH_FUNC},
        {"GL_STENCIL_CLEAR_VALUE", GL_STENCIL_CLEAR_VALUE},
        {"GL_STENCIL_FUNC", GL_STENCIL_FUNC},
        {"GL_STENCIL_FAIL", GL_STENCIL_FAIL},
        {"GL_STENCIL_PASS_DEPTH_FAIL", GL_STENCIL_PASS_DEPTH_FAIL},
        {"GL_STENCIL_PASS_DEPTH_PASS", GL_STENCIL_PASS_DEPTH_PASS},
        {"GL_STENCIL_REF", GL_STENCIL_REF},
        {"GL_STENCIL_VALUE_MASK", GL_STENCIL_VALUE_MASK},
        {"GL_STENCIL_WRITEMASK", GL_STENCIL_WRITEMASK},
        {"GL_STENCIL_BACK_FUNC", GL_STENCIL_BACK_FUNC},
        {"GL_STENCIL_BACK_FAIL", GL_STENCIL_BACK_FAIL},
        {"GL_STENCIL_BACK_PASS_DEPTH_FAIL", GL_STENCIL_BACK_PASS_DEPTH_FAIL},
        {"GL_STENCIL_BACK_PASS_DEPTH_PASS", GL_STENCIL_BACK_PASS_DEPTH_PASS},
        {"GL_STENCIL_BACK_REF", GL_STENCIL_BACK_REF},
        {"GL_STENCIL_BACK_VALUE_MASK", GL_STENCIL_BACK_VALUE_MASK},
        {"GL_STENCIL_BACK_WRITEMASK", GL_STENCIL_BACK_WRITEMASK},
        {"GL_VIEWPORT", GL_VIEWPORT},
        {"GL_SCISSOR_BOX", GL_SCISSOR_BOX},
        {"GL_COLOR_CLEAR_VALUE", GL_COLOR_CLEAR_VALUE},
        {"GL_COLOR_WRITEMASK", GL_COLOR_WRITEMASK},
        {"GL_UNPACK_ALIGNMENT", GL_UNPACK_ALIGNMENT},
        {"GL_PACK_ALIGNMENT", GL_PACK_ALIGNMENT},
        {"GL_MAX_TEXTURE_SIZE", GL_MAX_TEXTURE_SIZE},
        {"GL_MAX_VIEWPORT_DIMS", GL_MAX_VIEWPORT_DIMS},
        {"GL_SUBPIXEL_BITS", GL_SUBPIXEL_BITS},
        {"GL_RED_BITS", GL_RED_BITS},
        {"GL_GREEN_BITS", GL_GREEN_BITS},
        {"GL_BLUE_BITS", GL_BLUE_BITS},
        {"GL_ALPHA_BITS", GL_ALPHA_BITS},
        {"GL_DEPTH_BITS", GL_DEPTH_BITS},
        {"GL_STENCIL_BITS", GL_STENCIL_BITS},
        {"GL_POLYGON_OFFSET_UNITS", GL_POLYGON_OFFSET_UNITS},
        {"GL_POLYGON_OFFSET_FACTOR", GL_POLYGON_OFFSET_FACTOR},
        {"GL_TEXTURE_BINDING_2D", GL_TEXTURE_BINDING_2D},
        {"GL_SAMPLE_BUFFERS", GL_SAMPLE_BUFFERS},
        {"GL_SAMPLES", GL_SAMPLES},
        {"GL_SAMPLE_COVERAGE_VALUE", GL_SAMPLE_COVERAGE_VALUE},
        {"GL_SAMPLE_COVERAGE_INVERT", GL_SAMPLE_COVERAGE_INVERT},
        {"GL_NUM_COMPRESSED_TEXTURE_FORMATS", GL_NUM_COMPRESSED_TEXTURE_FORMATS},
        {"GL_COMPRESSED_TEXTURE_FORMATS", GL_COMPRESSED_TEXTURE_FORMATS},
        {"GL_DONT_CARE", GL_DONT_CARE},
        {"GL_FASTEST", GL_FASTEST},
        {"GL_NICEST", GL_NICEST},
        {"GL_GENERATE_MIPMAP_HINT", GL_GENERATE_MIPMAP_HINT},
        {"GL_BYTE", GL_BYTE},
        {"GL_UNSIGNED_BYTE", GL_UNSIGNED_BYTE},
        {"GL_SHORT", GL_SHORT},
        {"GL_UNSIGNED_SHORT", GL_UNSIGNED_SHORT},
        {"GL_INT", GL_INT},
        {"GL_UNSIGNED_INT", GL_UNSIGNED_INT},
        {"GL_FLOAT", GL_FLOAT},
        {"GL_FIXED", GL_FIXED},
        {"GL_DEPTH_COMPONENT", GL_DEPTH_COMPONENT},
        {"GL_ALPHA", GL_ALPHA},
        {"GL_RGB", GL_RGB},
        {"GL_RGBA", GL_RGBA},
        {"GL_LUMINANCE", GL_LUMINANCE},
        {"GL_LUMINANCE_ALPHA", GL_LUMINANCE_ALPHA},
        {"GL_UNSIGNED_SHORT_4_4_4_4", GL_UNSIGNED_SHORT_4_4_4_4},
        {"GL_UNSIGNED_SHORT_5_5_5_1", GL_UNSIGNED_SHORT_5_5_5_1},
        {"GL_UNSIGNED_SHORT_5_6_5", GL_UNSIGNED_SHORT_5_6_5},
        {"GL_FRAGMENT_SHADER", GL_FRAGMENT_SHADER},
        {"GL_VERTEX_SHADER", GL_VERTEX_SHADER},
        {"GL_MAX_VERTEX_ATTRIBS", GL_MAX_VERTEX_ATTRIBS},
        {"GL_MAX_VERTEX_UNIFORM_VECTORS", GL_MAX_VERTEX_UNIFORM_VECTORS},
        {"GL_MAX_VARYING_VECTORS", GL_MAX_VARYING_VECTORS},
        {"GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS", GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS},
        {"GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS", GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS},
        {"GL_MAX_TEXTURE_IMAGE_UNITS", GL_MAX_TEXTURE_IMAGE_UNITS},
        {"GL_MAX_FRAGMENT_UNIFORM_VECTORS", GL_MAX_FRAGMENT_UNIFORM_VECTORS},
        {"GL_SHADER_TYPE", GL_SHADER_TYPE},
        {"GL_DELETE_STATUS", GL_DELETE_STATUS},
        {"GL_LINK_STATUS", GL_LINK_STATUS},
        {"GL_VALIDATE_STATUS", GL_VALIDATE_STATUS},
        {"GL_ATTACHED_SHADERS", GL_ATTACHED_SHADERS},
        {"GL_ACTIVE_UNIFORMS", GL_ACTIVE_UNIFORMS},
        {"GL_ACTIVE_UNIFORM_MAX_LENGTH", GL_ACTIVE_UNIFORM_MAX_LENGTH},
        {"GL_ACTIVE_ATTRIBUTES", GL_ACTIVE_ATTRIBUTES},
        {"GL_ACTIVE_ATTRIBUTE_MAX_LENGTH", GL_ACTIVE_ATTRIBUTE_MAX_LENGTH},
        {"GL_SHADING_LANGUAGE_VERSION", GL_SHADING_LANGUAGE_VERSION},
        {"GL_CURRENT_PROGRAM", GL_CURRENT_PROGRAM},
        {"GL_NEVER", GL_NEVER},
        {"GL_LESS", GL_LESS},
        {"GL_EQUAL", GL_EQUAL},
        {"GL_LEQUAL", GL_LEQUAL},
        {"GL_GREATER", GL_GREATER},
        {"GL_NOTEQUAL", GL_NOTEQUAL},
        {"GL_GEQUAL", GL_GEQUAL},
        {"GL_ALWAYS", GL_ALWAYS},
        {"GL_KEEP", GL_KEEP},
        {"GL_REPLACE", GL_REPLACE},
        {"GL_INCR", GL_INCR},
        {"GL_DECR", GL_DECR},
        {"GL_INVERT", GL_INVERT},
        {"GL_INCR_WRAP", GL_INCR_WRAP},
        {"GL_DECR_WRAP", GL_DECR_WRAP},
        {"GL_VENDOR", GL_VENDOR},
        {"GL_RENDERER", GL_RENDERER},
        {"GL_VERSION", GL_VERSION},
        {"GL_EXTENSIONS", GL_EXTENSIONS},
        {"GL_NEAREST", GL_NEAREST},
        {"GL_LINEAR", GL_LINEAR},
        {"GL_NEAREST_MIPMAP_NEAREST", GL_NEAREST_MIPMAP_NEAREST},
        {"GL_LINEAR_MIPMAP_NEAREST", GL_LINEAR_MIPMAP_NEAREST},
        {"GL_NEAREST_MIPMAP_LINEAR", GL_NEAREST_MIPMAP_LINEAR},
        {"GL_LINEAR_MIPMAP_LINEAR", GL_LINEAR_MIPMAP_LINEAR},
        {"GL_TEXTURE_MAG_FILTER", GL_TEXTURE_MAG_FILTER},
        {"GL_TEXTURE_MIN_FILTER", GL_TEXTURE_MIN_FILTER},
        {"GL_TEXTURE_WRAP_S", GL_TEXTURE_WRAP_S},
        {"GL_TEXTURE_WRAP_T", GL_TEXTURE_WRAP_T},
        {"GL_TEXTURE", GL_TEXTURE},
        {"GL_TEXTURE_CUBE_MAP", GL_TEXTURE_CUBE_MAP},
        {"GL_TEXTURE_BINDING_CUBE_MAP", GL_TEXTURE_BINDING_CUBE_MAP},
        {"GL_TEXTURE_CUBE_MAP_POSITIVE_X", GL_TEXTURE_CUBE_MAP_POSITIVE_X},
        {"GL_TEXTURE_CUBE_MAP_NEGATIVE_X", GL_TEXTURE_CUBE_MAP_NEGATIVE_X},
        {"GL_TEXTURE_CUBE_MAP_POSITIVE_Y", GL_TEXTURE_CUBE_MAP_POSITIVE_Y},
        {"GL_TEXTURE_CUBE_MAP_NEGATIVE_Y", GL_TEXTURE_CUBE_MAP_NEGATIVE_Y},
        {"GL_TEXTURE_CUBE_MAP_POSITIVE_Z", GL_TEXTURE_CUBE_MAP_POSITIVE_Z},
        {"GL_TEXTURE_CUBE_MAP_NEGATIVE_Z", GL_TEXTURE_CUBE_MAP_NEGATIVE_Z},
        {"GL_MAX_CUBE_MAP_TEXTURE_SIZE", GL_MAX_CUBE_MAP_TEXTURE_SIZE},
        {"GL_TEXTURE0", GL_TEXTURE0},
        {"GL_TEXTURE1", GL_TEXTURE1},
        {"GL_TEXTURE2", GL_TEXTURE2},
        {"GL_TEXTURE3", GL_TEXTURE3},
        {"GL_TEXTURE4", GL_TEXTURE4},
        {"GL_TEXTURE5", GL_TEXTURE5},
        {"GL_TEXTURE6", GL_TEXTURE6},
        {"GL_TEXTURE7", GL_TEXTURE7},
        {"GL_TEXTURE8", GL_TEXTURE8},
        {"GL_TEXTURE9", GL_TEXTURE9},
        {"GL_TEXTURE10", GL_TEXTURE10},
        {"GL_TEXTURE11", GL_TEXTURE11},
        {"GL_TEXTURE12", GL_TEXTURE12},
        {"GL_TEXTURE13", GL_TEXTURE13},
        {"GL_TEXTURE14", GL_TEXTURE14},
        {"GL_TEXTURE15", GL_TEXTURE15},
        {"GL_TEXTURE16", GL_TEXTURE16},
        {"GL_TEXTURE17", GL_TEXTURE17},
        {"GL_TEXTURE18", GL_TEXTURE18},
        {"GL_TEXTURE19", GL_TEXTURE19},
        {"GL_TEXTURE20", GL_TEXTURE20},
        {"GL_TEXTURE21", GL_TEXTURE21},
        {"GL_TEXTURE22", GL_TEXTURE22},
        {"GL_TEXTURE23", GL_TEXTURE23},
        {"GL_TEXTURE24", GL_TEXTURE24},
        {"GL_TEXTURE25", GL_TEXTURE25},
        {"GL_TEXTURE26", GL_TEXTURE26},
        {"GL_TEXTURE27", GL_TEXTURE27},
        {"GL_TEXTURE28", GL_TEXTURE28},
        {"GL_TEXTURE29", GL_TEXTURE29},
        {"GL_TEXTURE30", GL_TEXTURE30},
        {"GL_TEXTURE31", GL_TEXTURE31},
        {"GL_ACTIVE_TEXTURE", GL_ACTIVE_TEXTURE},
        {"GL_REPEAT", GL_REPEAT},
        {"GL_CLAMP_TO_EDGE", GL_CLAMP_TO_EDGE},
        {"GL_MIRRORED_REPEAT", GL_MIRRORED_REPEAT},
        {"GL_FLOAT_VEC2", GL_FLOAT_VEC2},
        {"GL_FLOAT_VEC3", GL_FLOAT_VEC3},
        {"GL_FLOAT_VEC4", GL_FLOAT_VEC4},
        {"GL_INT_VEC2", GL_INT_VEC2},
        {"GL_INT_VEC3", GL_INT_VEC3},
        {"GL_INT_VEC4", GL_INT_VEC4},
        {"GL_BOOL", GL_BOOL},
        {"GL_BOOL_VEC2", GL_BOOL_VEC2},
        {"GL_BOOL_VEC3", GL_BOOL_VEC3},
        {"GL_BOOL_VEC4", GL_BOOL_VEC4},
        {"GL_FLOAT_MAT2", GL_FLOAT_MAT2},
        {"GL_FLOAT_MAT3", GL_FLOAT_MAT3},
        {"GL_FLOAT_MAT4", GL_FLOAT_MAT4},
        {"GL_SAMPLER_2D", GL_SAMPLER_2D},
        {"GL_SAMPLER_CUBE", GL_SAMPLER_CUBE},
        {"GL_VERTEX_ATTRIB_ARRAY_ENABLED", GL_VERTEX_ATTRIB_ARRAY_ENABLED},
        {"GL_VERTEX_ATTRIB_ARRAY_SIZE", GL_VERTEX_ATTRIB_ARRAY_SIZE},
        {"GL_VERTEX_ATTRIB_ARRAY_STRIDE", GL_VERTEX_ATTRIB_ARRAY_STRIDE},
        {"GL_VERTEX_ATTRIB_ARRAY_TYPE", GL_VERTEX_ATTRIB_ARRAY_TYPE},
        {"GL_VERTEX_ATTRIB_ARRAY_NORMALIZED", GL_VERTEX_ATTRIB_ARRAY_NORMALIZED},
        {"GL_VERTEX_ATTRIB_ARRAY_POINTER", GL_VERTEX_ATTRIB_ARRAY_POINTER},
        {"GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING},
        {"GL_IMPLEMENTATION_COLOR_READ_TYPE", GL_IMPLEMENTATION_COLOR_READ_TYPE},
        {"GL_IMPLEMENTATION_COLOR_READ_FORMAT", GL_IMPLEMENTATION_COLOR_READ_FORMAT},
        {"GL_COMPILE_STATUS", GL_COMPILE_STATUS},
        {"GL_INFO_LOG_LENGTH", GL_INFO_LOG_LENGTH},
        {"GL_SHADER_SOURCE_LENGTH", GL_SHADER_SOURCE_LENGTH},
        {"GL_SHADER_COMPILER", GL_SHADER_COMPILER},
        {"GL_SHADER_BINARY_FORMATS", GL_SHADER_BINARY_FORMATS},
        {"GL_NUM_SHADER_BINARY_FORMATS", GL_NUM_SHADER_BINARY_FORMATS},
        {"GL_LOW_FLOAT", GL_LOW_FLOAT},
        {"GL_MEDIUM_FLOAT", GL_MEDIUM_FLOAT},
        {"GL_HIGH_FLOAT", GL_HIGH_FLOAT},
        {"GL_LOW_INT", GL_LOW_INT},
        {"GL_MEDIUM_INT", GL_MEDIUM_INT},
        {"GL_HIGH_INT", GL_HIGH_INT},
        {"GL_FRAMEBUFFER", GL_FRAMEBUFFER},
        {"GL_RENDERBUFFER", GL_RENDERBUFFER},
        {"GL_RGBA4", GL_RGBA4},
        {"GL_RGB5_A1", GL_RGB5_A1},
        {"GL_RGB565", GL_RGB565},
        {"GL_DEPTH_COMPONENT16", GL_DEPTH_COMPONENT16},
        {"GL_STENCIL_INDEX8", GL_STENCIL_INDEX8},
        {"GL_RENDERBUFFER_WIDTH", GL_RENDERBUFFER_WIDTH},
        {"GL_RENDERBUFFER_HEIGHT", GL_RENDERBUFFER_HEIGHT},
        {"GL_RENDERBUFFER_INTERNAL_FORMAT", GL_RENDERBUFFER_INTERNAL_FORMAT},
        {"GL_RENDERBUFFER_RED_SIZE", GL_RENDERBUFFER_RED_SIZE},
        {"GL_RENDERBUFFER_GREEN_SIZE", GL_RENDERBUFFER_GREEN_SIZE},
        {"GL_RENDERBUFFER_BLUE_SIZE", GL_RENDERBUFFER_BLUE_SIZE},
        {"GL_RENDERBUFFER_ALPHA_SIZE", GL_RENDERBUFFER_ALPHA_SIZE},
        {"GL_RENDERBUFFER_DEPTH_SIZE", GL_RENDERBUFFER_DEPTH_SIZE},
        {"GL_RENDERBUFFER_STENCIL_SIZE", GL_RENDERBUFFER_STENCIL_SIZE},
        {"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE},
        {"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME", GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME},
        {"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL", GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL},
        {"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE", GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE},
        {"GL_COLOR_ATTACHMENT0", GL_COLOR_ATTACHMENT0},
        {"GL_DEPTH_ATTACHMENT", GL_DEPTH_ATTACHMENT},
        {"GL_STENCIL_ATTACHMENT", GL_STENCIL_ATTACHMENT},
        {"GL_NONE", GL_NONE},
        {"GL_FRAMEBUFFER_COMPLETE", GL_FRAMEBUFFER_COMPLETE},
        {"GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT", GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT},
        {"GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT},
        {"GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS", GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS},
        {"GL_FRAMEBUFFER_UNSUPPORTED", GL_FRAMEBUFFER_UNSUPPORTED},
        {"GL_FRAMEBUFFER_BINDING", GL_FRAMEBUFFER_BINDING},
        {"GL_RENDERBUFFER_BINDING", GL_RENDERBUFFER_BINDING},
        {"GL_MAX_RENDERBUFFER_SIZE", GL_MAX_RENDERBUFFER_SIZE},
        {"GL_INVALID_FRAMEBUFFER_OPERATION", GL_INVALID_FRAMEBUFFER_OPERATION},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ES_VERSION_2_0 */
#endif /* _PYCGLES2_GL_ES_VERSION_2_0_H_ */

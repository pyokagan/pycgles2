#ifndef _PYCGLES2_GL_ES_VERSION_3_1_H_
#define _PYCGLES2_GL_ES_VERSION_3_1_H_
#ifdef GL_ES_VERSION_3_1
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glDispatchCompute */
static PyObject *
PyCGLES2_glDispatchCompute(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) */
    PyErr_SetString(PyExc_NotImplementedError, "glDispatchCompute");
    return NULL;
}


/* TODO(NotImplemented): glDispatchComputeIndirect */
static PyObject *
PyCGLES2_glDispatchComputeIndirect(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDispatchComputeIndirect (GLintptr indirect) */
    PyErr_SetString(PyExc_NotImplementedError, "glDispatchComputeIndirect");
    return NULL;
}


/* TODO(NotImplemented): glDrawArraysIndirect */
static PyObject *
PyCGLES2_glDrawArraysIndirect(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawArraysIndirect (GLenum mode, const void *indirect) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawArraysIndirect");
    return NULL;
}


/* TODO(NotImplemented): glDrawElementsIndirect */
static PyObject *
PyCGLES2_glDrawElementsIndirect(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect) */
    PyErr_SetString(PyExc_NotImplementedError, "glDrawElementsIndirect");
    return NULL;
}


/* TODO(NotImplemented): glFramebufferParameteri */
static PyObject *
PyCGLES2_glFramebufferParameteri(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glFramebufferParameteri (GLenum target, GLenum pname, GLint param) */
    PyErr_SetString(PyExc_NotImplementedError, "glFramebufferParameteri");
    return NULL;
}


/* TODO(NotImplemented): glGetFramebufferParameteriv */
static PyObject *
PyCGLES2_glGetFramebufferParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetFramebufferParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramInterfaceiv */
static PyObject *
PyCGLES2_glGetProgramInterfaceiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramInterfaceiv");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramResourceIndex */
static PyObject *
PyCGLES2_glGetProgramResourceIndex(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramResourceIndex");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramResourceName */
static PyObject *
PyCGLES2_glGetProgramResourceName(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramResourceName");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramResourceiv */
static PyObject *
PyCGLES2_glGetProgramResourceiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramResourceiv");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramResourceLocation */
static PyObject *
PyCGLES2_glGetProgramResourceLocation(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramResourceLocation");
    return NULL;
}


/* TODO(NotImplemented): glUseProgramStages */
static PyObject *
PyCGLES2_glUseProgramStages(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glUseProgramStages");
    return NULL;
}


/* TODO(NotImplemented): glActiveShaderProgram */
static PyObject *
PyCGLES2_glActiveShaderProgram(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glActiveShaderProgram (GLuint pipeline, GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glActiveShaderProgram");
    return NULL;
}


/* TODO(NotImplemented): glCreateShaderProgramv */
static PyObject *
PyCGLES2_glCreateShaderProgramv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings) */
    PyErr_SetString(PyExc_NotImplementedError, "glCreateShaderProgramv");
    return NULL;
}


/* TODO(NotImplemented): glBindProgramPipeline */
static PyObject *
PyCGLES2_glBindProgramPipeline(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindProgramPipeline (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindProgramPipeline");
    return NULL;
}


/* TODO(NotImplemented): glDeleteProgramPipelines */
static PyObject *
PyCGLES2_glDeleteProgramPipelines(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteProgramPipelines");
    return NULL;
}


/* TODO(NotImplemented): glGenProgramPipelines */
static PyObject *
PyCGLES2_glGenProgramPipelines(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenProgramPipelines (GLsizei n, GLuint *pipelines) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenProgramPipelines");
    return NULL;
}


/* TODO(NotImplemented): glIsProgramPipeline */
static PyObject *
PyCGLES2_glIsProgramPipeline(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsProgramPipeline (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsProgramPipeline");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramPipelineiv */
static PyObject *
PyCGLES2_glGetProgramPipelineiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramPipelineiv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1i */
static PyObject *
PyCGLES2_glProgramUniform1i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1i (GLuint program, GLint location, GLint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1i");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2i */
static PyObject *
PyCGLES2_glProgramUniform2i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2i");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3i */
static PyObject *
PyCGLES2_glProgramUniform3i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3i");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4i */
static PyObject *
PyCGLES2_glProgramUniform4i(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4i");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1ui */
static PyObject *
PyCGLES2_glProgramUniform1ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1ui (GLuint program, GLint location, GLuint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1ui");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2ui */
static PyObject *
PyCGLES2_glProgramUniform2ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2ui");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3ui */
static PyObject *
PyCGLES2_glProgramUniform3ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3ui");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4ui */
static PyObject *
PyCGLES2_glProgramUniform4ui(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4ui");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1f */
static PyObject *
PyCGLES2_glProgramUniform1f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1f (GLuint program, GLint location, GLfloat v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1f");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2f */
static PyObject *
PyCGLES2_glProgramUniform2f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2f");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3f */
static PyObject *
PyCGLES2_glProgramUniform3f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3f");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4f */
static PyObject *
PyCGLES2_glProgramUniform4f(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4f");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1iv */
static PyObject *
PyCGLES2_glProgramUniform1iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1iv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2iv */
static PyObject *
PyCGLES2_glProgramUniform2iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2iv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3iv */
static PyObject *
PyCGLES2_glProgramUniform3iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3iv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4iv */
static PyObject *
PyCGLES2_glProgramUniform4iv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4iv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1uiv */
static PyObject *
PyCGLES2_glProgramUniform1uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1uiv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2uiv */
static PyObject *
PyCGLES2_glProgramUniform2uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2uiv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3uiv */
static PyObject *
PyCGLES2_glProgramUniform3uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3uiv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4uiv */
static PyObject *
PyCGLES2_glProgramUniform4uiv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4uiv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1fv */
static PyObject *
PyCGLES2_glProgramUniform1fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2fv */
static PyObject *
PyCGLES2_glProgramUniform2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3fv */
static PyObject *
PyCGLES2_glProgramUniform3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4fv */
static PyObject *
PyCGLES2_glProgramUniform4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2x3fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix2x3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2x3fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3x2fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix3x2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3x2fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2x4fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix2x4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2x4fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4x2fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix4x2fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4x2fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3x4fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix3x4fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3x4fv");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4x3fv */
static PyObject *
PyCGLES2_glProgramUniformMatrix4x3fv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4x3fv");
    return NULL;
}


/* TODO(NotImplemented): glValidateProgramPipeline */
static PyObject *
PyCGLES2_glValidateProgramPipeline(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glValidateProgramPipeline (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glValidateProgramPipeline");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramPipelineInfoLog */
static PyObject *
PyCGLES2_glGetProgramPipelineInfoLog(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramPipelineInfoLog");
    return NULL;
}


/* TODO(NotImplemented): glBindImageTexture */
static PyObject *
PyCGLES2_glBindImageTexture(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindImageTexture");
    return NULL;
}


/* TODO(NotImplemented): glGetBooleani_v */
static PyObject *
PyCGLES2_glGetBooleani_v(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBooleani_v (GLenum target, GLuint index, GLboolean *data) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBooleani_v");
    return NULL;
}


/* TODO(NotImplemented): glMemoryBarrier */
static PyObject *
PyCGLES2_glMemoryBarrier(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMemoryBarrier (GLbitfield barriers) */
    PyErr_SetString(PyExc_NotImplementedError, "glMemoryBarrier");
    return NULL;
}


/* TODO(NotImplemented): glMemoryBarrierByRegion */
static PyObject *
PyCGLES2_glMemoryBarrierByRegion(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMemoryBarrierByRegion (GLbitfield barriers) */
    PyErr_SetString(PyExc_NotImplementedError, "glMemoryBarrierByRegion");
    return NULL;
}


/* TODO(NotImplemented): glTexStorage2DMultisample */
static PyObject *
PyCGLES2_glTexStorage2DMultisample(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage2DMultisample");
    return NULL;
}


/* TODO(NotImplemented): glGetMultisamplefv */
static PyObject *
PyCGLES2_glGetMultisamplefv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetMultisamplefv");
    return NULL;
}


/* TODO(NotImplemented): glSampleMaski */
static PyObject *
PyCGLES2_glSampleMaski(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glSampleMaski (GLuint maskNumber, GLbitfield mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glSampleMaski");
    return NULL;
}


/* TODO(NotImplemented): glGetTexLevelParameteriv */
static PyObject *
PyCGLES2_glGetTexLevelParameteriv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexLevelParameteriv");
    return NULL;
}


/* TODO(NotImplemented): glGetTexLevelParameterfv */
static PyObject *
PyCGLES2_glGetTexLevelParameterfv(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetTexLevelParameterfv");
    return NULL;
}


/* TODO(NotImplemented): glBindVertexBuffer */
static PyObject *
PyCGLES2_glBindVertexBuffer(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindVertexBuffer");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribFormat */
static PyObject *
PyCGLES2_glVertexAttribFormat(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribFormat");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribIFormat */
static PyObject *
PyCGLES2_glVertexAttribIFormat(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribIFormat");
    return NULL;
}


/* TODO(NotImplemented): glVertexAttribBinding */
static PyObject *
PyCGLES2_glVertexAttribBinding(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexAttribBinding");
    return NULL;
}


/* TODO(NotImplemented): glVertexBindingDivisor */
static PyObject *
PyCGLES2_glVertexBindingDivisor(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor) */
    PyErr_SetString(PyExc_NotImplementedError, "glVertexBindingDivisor");
    return NULL;
}


static int
PyCGLES2_GL_ES_VERSION_3_1(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_COMPUTE_SHADER", GL_COMPUTE_SHADER},
        {"GL_MAX_COMPUTE_UNIFORM_BLOCKS", GL_MAX_COMPUTE_UNIFORM_BLOCKS},
        {"GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS", GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS},
        {"GL_MAX_COMPUTE_IMAGE_UNIFORMS", GL_MAX_COMPUTE_IMAGE_UNIFORMS},
        {"GL_MAX_COMPUTE_SHARED_MEMORY_SIZE", GL_MAX_COMPUTE_SHARED_MEMORY_SIZE},
        {"GL_MAX_COMPUTE_UNIFORM_COMPONENTS", GL_MAX_COMPUTE_UNIFORM_COMPONENTS},
        {"GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS", GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS},
        {"GL_MAX_COMPUTE_ATOMIC_COUNTERS", GL_MAX_COMPUTE_ATOMIC_COUNTERS},
        {"GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS", GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS},
        {"GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS", GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS},
        {"GL_MAX_COMPUTE_WORK_GROUP_COUNT", GL_MAX_COMPUTE_WORK_GROUP_COUNT},
        {"GL_MAX_COMPUTE_WORK_GROUP_SIZE", GL_MAX_COMPUTE_WORK_GROUP_SIZE},
        {"GL_COMPUTE_WORK_GROUP_SIZE", GL_COMPUTE_WORK_GROUP_SIZE},
        {"GL_DISPATCH_INDIRECT_BUFFER", GL_DISPATCH_INDIRECT_BUFFER},
        {"GL_DISPATCH_INDIRECT_BUFFER_BINDING", GL_DISPATCH_INDIRECT_BUFFER_BINDING},
        {"GL_COMPUTE_SHADER_BIT", GL_COMPUTE_SHADER_BIT},
        {"GL_DRAW_INDIRECT_BUFFER", GL_DRAW_INDIRECT_BUFFER},
        {"GL_DRAW_INDIRECT_BUFFER_BINDING", GL_DRAW_INDIRECT_BUFFER_BINDING},
        {"GL_MAX_UNIFORM_LOCATIONS", GL_MAX_UNIFORM_LOCATIONS},
        {"GL_FRAMEBUFFER_DEFAULT_WIDTH", GL_FRAMEBUFFER_DEFAULT_WIDTH},
        {"GL_FRAMEBUFFER_DEFAULT_HEIGHT", GL_FRAMEBUFFER_DEFAULT_HEIGHT},
        {"GL_FRAMEBUFFER_DEFAULT_SAMPLES", GL_FRAMEBUFFER_DEFAULT_SAMPLES},
        {"GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS", GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS},
        {"GL_MAX_FRAMEBUFFER_WIDTH", GL_MAX_FRAMEBUFFER_WIDTH},
        {"GL_MAX_FRAMEBUFFER_HEIGHT", GL_MAX_FRAMEBUFFER_HEIGHT},
        {"GL_MAX_FRAMEBUFFER_SAMPLES", GL_MAX_FRAMEBUFFER_SAMPLES},
        {"GL_UNIFORM", GL_UNIFORM},
        {"GL_UNIFORM_BLOCK", GL_UNIFORM_BLOCK},
        {"GL_PROGRAM_INPUT", GL_PROGRAM_INPUT},
        {"GL_PROGRAM_OUTPUT", GL_PROGRAM_OUTPUT},
        {"GL_BUFFER_VARIABLE", GL_BUFFER_VARIABLE},
        {"GL_SHADER_STORAGE_BLOCK", GL_SHADER_STORAGE_BLOCK},
        {"GL_ATOMIC_COUNTER_BUFFER", GL_ATOMIC_COUNTER_BUFFER},
        {"GL_TRANSFORM_FEEDBACK_VARYING", GL_TRANSFORM_FEEDBACK_VARYING},
        {"GL_ACTIVE_RESOURCES", GL_ACTIVE_RESOURCES},
        {"GL_MAX_NAME_LENGTH", GL_MAX_NAME_LENGTH},
        {"GL_MAX_NUM_ACTIVE_VARIABLES", GL_MAX_NUM_ACTIVE_VARIABLES},
        {"GL_NAME_LENGTH", GL_NAME_LENGTH},
        {"GL_TYPE", GL_TYPE},
        {"GL_ARRAY_SIZE", GL_ARRAY_SIZE},
        {"GL_OFFSET", GL_OFFSET},
        {"GL_BLOCK_INDEX", GL_BLOCK_INDEX},
        {"GL_ARRAY_STRIDE", GL_ARRAY_STRIDE},
        {"GL_MATRIX_STRIDE", GL_MATRIX_STRIDE},
        {"GL_IS_ROW_MAJOR", GL_IS_ROW_MAJOR},
        {"GL_ATOMIC_COUNTER_BUFFER_INDEX", GL_ATOMIC_COUNTER_BUFFER_INDEX},
        {"GL_BUFFER_BINDING", GL_BUFFER_BINDING},
        {"GL_BUFFER_DATA_SIZE", GL_BUFFER_DATA_SIZE},
        {"GL_NUM_ACTIVE_VARIABLES", GL_NUM_ACTIVE_VARIABLES},
        {"GL_ACTIVE_VARIABLES", GL_ACTIVE_VARIABLES},
        {"GL_REFERENCED_BY_VERTEX_SHADER", GL_REFERENCED_BY_VERTEX_SHADER},
        {"GL_REFERENCED_BY_FRAGMENT_SHADER", GL_REFERENCED_BY_FRAGMENT_SHADER},
        {"GL_REFERENCED_BY_COMPUTE_SHADER", GL_REFERENCED_BY_COMPUTE_SHADER},
        {"GL_TOP_LEVEL_ARRAY_SIZE", GL_TOP_LEVEL_ARRAY_SIZE},
        {"GL_TOP_LEVEL_ARRAY_STRIDE", GL_TOP_LEVEL_ARRAY_STRIDE},
        {"GL_LOCATION", GL_LOCATION},
        {"GL_VERTEX_SHADER_BIT", GL_VERTEX_SHADER_BIT},
        {"GL_FRAGMENT_SHADER_BIT", GL_FRAGMENT_SHADER_BIT},
        {"GL_ALL_SHADER_BITS", GL_ALL_SHADER_BITS},
        {"GL_PROGRAM_SEPARABLE", GL_PROGRAM_SEPARABLE},
        {"GL_ACTIVE_PROGRAM", GL_ACTIVE_PROGRAM},
        {"GL_PROGRAM_PIPELINE_BINDING", GL_PROGRAM_PIPELINE_BINDING},
        {"GL_ATOMIC_COUNTER_BUFFER_BINDING", GL_ATOMIC_COUNTER_BUFFER_BINDING},
        {"GL_ATOMIC_COUNTER_BUFFER_START", GL_ATOMIC_COUNTER_BUFFER_START},
        {"GL_ATOMIC_COUNTER_BUFFER_SIZE", GL_ATOMIC_COUNTER_BUFFER_SIZE},
        {"GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS", GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS},
        {"GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS", GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS},
        {"GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS", GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS},
        {"GL_MAX_VERTEX_ATOMIC_COUNTERS", GL_MAX_VERTEX_ATOMIC_COUNTERS},
        {"GL_MAX_FRAGMENT_ATOMIC_COUNTERS", GL_MAX_FRAGMENT_ATOMIC_COUNTERS},
        {"GL_MAX_COMBINED_ATOMIC_COUNTERS", GL_MAX_COMBINED_ATOMIC_COUNTERS},
        {"GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE", GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE},
        {"GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS", GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS},
        {"GL_ACTIVE_ATOMIC_COUNTER_BUFFERS", GL_ACTIVE_ATOMIC_COUNTER_BUFFERS},
        {"GL_UNSIGNED_INT_ATOMIC_COUNTER", GL_UNSIGNED_INT_ATOMIC_COUNTER},
        {"GL_MAX_IMAGE_UNITS", GL_MAX_IMAGE_UNITS},
        {"GL_MAX_VERTEX_IMAGE_UNIFORMS", GL_MAX_VERTEX_IMAGE_UNIFORMS},
        {"GL_MAX_FRAGMENT_IMAGE_UNIFORMS", GL_MAX_FRAGMENT_IMAGE_UNIFORMS},
        {"GL_MAX_COMBINED_IMAGE_UNIFORMS", GL_MAX_COMBINED_IMAGE_UNIFORMS},
        {"GL_IMAGE_BINDING_NAME", GL_IMAGE_BINDING_NAME},
        {"GL_IMAGE_BINDING_LEVEL", GL_IMAGE_BINDING_LEVEL},
        {"GL_IMAGE_BINDING_LAYERED", GL_IMAGE_BINDING_LAYERED},
        {"GL_IMAGE_BINDING_LAYER", GL_IMAGE_BINDING_LAYER},
        {"GL_IMAGE_BINDING_ACCESS", GL_IMAGE_BINDING_ACCESS},
        {"GL_IMAGE_BINDING_FORMAT", GL_IMAGE_BINDING_FORMAT},
        {"GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT", GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT},
        {"GL_ELEMENT_ARRAY_BARRIER_BIT", GL_ELEMENT_ARRAY_BARRIER_BIT},
        {"GL_UNIFORM_BARRIER_BIT", GL_UNIFORM_BARRIER_BIT},
        {"GL_TEXTURE_FETCH_BARRIER_BIT", GL_TEXTURE_FETCH_BARRIER_BIT},
        {"GL_SHADER_IMAGE_ACCESS_BARRIER_BIT", GL_SHADER_IMAGE_ACCESS_BARRIER_BIT},
        {"GL_COMMAND_BARRIER_BIT", GL_COMMAND_BARRIER_BIT},
        {"GL_PIXEL_BUFFER_BARRIER_BIT", GL_PIXEL_BUFFER_BARRIER_BIT},
        {"GL_TEXTURE_UPDATE_BARRIER_BIT", GL_TEXTURE_UPDATE_BARRIER_BIT},
        {"GL_BUFFER_UPDATE_BARRIER_BIT", GL_BUFFER_UPDATE_BARRIER_BIT},
        {"GL_FRAMEBUFFER_BARRIER_BIT", GL_FRAMEBUFFER_BARRIER_BIT},
        {"GL_TRANSFORM_FEEDBACK_BARRIER_BIT", GL_TRANSFORM_FEEDBACK_BARRIER_BIT},
        {"GL_ATOMIC_COUNTER_BARRIER_BIT", GL_ATOMIC_COUNTER_BARRIER_BIT},
        {"GL_ALL_BARRIER_BITS", GL_ALL_BARRIER_BITS},
        {"GL_IMAGE_2D", GL_IMAGE_2D},
        {"GL_IMAGE_3D", GL_IMAGE_3D},
        {"GL_IMAGE_CUBE", GL_IMAGE_CUBE},
        {"GL_IMAGE_2D_ARRAY", GL_IMAGE_2D_ARRAY},
        {"GL_INT_IMAGE_2D", GL_INT_IMAGE_2D},
        {"GL_INT_IMAGE_3D", GL_INT_IMAGE_3D},
        {"GL_INT_IMAGE_CUBE", GL_INT_IMAGE_CUBE},
        {"GL_INT_IMAGE_2D_ARRAY", GL_INT_IMAGE_2D_ARRAY},
        {"GL_UNSIGNED_INT_IMAGE_2D", GL_UNSIGNED_INT_IMAGE_2D},
        {"GL_UNSIGNED_INT_IMAGE_3D", GL_UNSIGNED_INT_IMAGE_3D},
        {"GL_UNSIGNED_INT_IMAGE_CUBE", GL_UNSIGNED_INT_IMAGE_CUBE},
        {"GL_UNSIGNED_INT_IMAGE_2D_ARRAY", GL_UNSIGNED_INT_IMAGE_2D_ARRAY},
        {"GL_IMAGE_FORMAT_COMPATIBILITY_TYPE", GL_IMAGE_FORMAT_COMPATIBILITY_TYPE},
        {"GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE", GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE},
        {"GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS", GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS},
        {"GL_READ_ONLY", GL_READ_ONLY},
        {"GL_WRITE_ONLY", GL_WRITE_ONLY},
        {"GL_READ_WRITE", GL_READ_WRITE},
        {"GL_SHADER_STORAGE_BUFFER", GL_SHADER_STORAGE_BUFFER},
        {"GL_SHADER_STORAGE_BUFFER_BINDING", GL_SHADER_STORAGE_BUFFER_BINDING},
        {"GL_SHADER_STORAGE_BUFFER_START", GL_SHADER_STORAGE_BUFFER_START},
        {"GL_SHADER_STORAGE_BUFFER_SIZE", GL_SHADER_STORAGE_BUFFER_SIZE},
        {"GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS", GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS},
        {"GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS", GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS},
        {"GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS", GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS},
        {"GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS", GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS},
        {"GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS", GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS},
        {"GL_MAX_SHADER_STORAGE_BLOCK_SIZE", GL_MAX_SHADER_STORAGE_BLOCK_SIZE},
        {"GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT", GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT},
        {"GL_SHADER_STORAGE_BARRIER_BIT", GL_SHADER_STORAGE_BARRIER_BIT},
        {"GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES", GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES},
        {"GL_DEPTH_STENCIL_TEXTURE_MODE", GL_DEPTH_STENCIL_TEXTURE_MODE},
        {"GL_STENCIL_INDEX", GL_STENCIL_INDEX},
        {"GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET", GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET},
        {"GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET", GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET},
        {"GL_SAMPLE_POSITION", GL_SAMPLE_POSITION},
        {"GL_SAMPLE_MASK", GL_SAMPLE_MASK},
        {"GL_SAMPLE_MASK_VALUE", GL_SAMPLE_MASK_VALUE},
        {"GL_TEXTURE_2D_MULTISAMPLE", GL_TEXTURE_2D_MULTISAMPLE},
        {"GL_MAX_SAMPLE_MASK_WORDS", GL_MAX_SAMPLE_MASK_WORDS},
        {"GL_MAX_COLOR_TEXTURE_SAMPLES", GL_MAX_COLOR_TEXTURE_SAMPLES},
        {"GL_MAX_DEPTH_TEXTURE_SAMPLES", GL_MAX_DEPTH_TEXTURE_SAMPLES},
        {"GL_MAX_INTEGER_SAMPLES", GL_MAX_INTEGER_SAMPLES},
        {"GL_TEXTURE_BINDING_2D_MULTISAMPLE", GL_TEXTURE_BINDING_2D_MULTISAMPLE},
        {"GL_TEXTURE_SAMPLES", GL_TEXTURE_SAMPLES},
        {"GL_TEXTURE_FIXED_SAMPLE_LOCATIONS", GL_TEXTURE_FIXED_SAMPLE_LOCATIONS},
        {"GL_TEXTURE_WIDTH", GL_TEXTURE_WIDTH},
        {"GL_TEXTURE_HEIGHT", GL_TEXTURE_HEIGHT},
        {"GL_TEXTURE_DEPTH", GL_TEXTURE_DEPTH},
        {"GL_TEXTURE_INTERNAL_FORMAT", GL_TEXTURE_INTERNAL_FORMAT},
        {"GL_TEXTURE_RED_SIZE", GL_TEXTURE_RED_SIZE},
        {"GL_TEXTURE_GREEN_SIZE", GL_TEXTURE_GREEN_SIZE},
        {"GL_TEXTURE_BLUE_SIZE", GL_TEXTURE_BLUE_SIZE},
        {"GL_TEXTURE_ALPHA_SIZE", GL_TEXTURE_ALPHA_SIZE},
        {"GL_TEXTURE_DEPTH_SIZE", GL_TEXTURE_DEPTH_SIZE},
        {"GL_TEXTURE_STENCIL_SIZE", GL_TEXTURE_STENCIL_SIZE},
        {"GL_TEXTURE_SHARED_SIZE", GL_TEXTURE_SHARED_SIZE},
        {"GL_TEXTURE_RED_TYPE", GL_TEXTURE_RED_TYPE},
        {"GL_TEXTURE_GREEN_TYPE", GL_TEXTURE_GREEN_TYPE},
        {"GL_TEXTURE_BLUE_TYPE", GL_TEXTURE_BLUE_TYPE},
        {"GL_TEXTURE_ALPHA_TYPE", GL_TEXTURE_ALPHA_TYPE},
        {"GL_TEXTURE_DEPTH_TYPE", GL_TEXTURE_DEPTH_TYPE},
        {"GL_TEXTURE_COMPRESSED", GL_TEXTURE_COMPRESSED},
        {"GL_SAMPLER_2D_MULTISAMPLE", GL_SAMPLER_2D_MULTISAMPLE},
        {"GL_INT_SAMPLER_2D_MULTISAMPLE", GL_INT_SAMPLER_2D_MULTISAMPLE},
        {"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE", GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE},
        {"GL_VERTEX_ATTRIB_BINDING", GL_VERTEX_ATTRIB_BINDING},
        {"GL_VERTEX_ATTRIB_RELATIVE_OFFSET", GL_VERTEX_ATTRIB_RELATIVE_OFFSET},
        {"GL_VERTEX_BINDING_DIVISOR", GL_VERTEX_BINDING_DIVISOR},
        {"GL_VERTEX_BINDING_OFFSET", GL_VERTEX_BINDING_OFFSET},
        {"GL_VERTEX_BINDING_STRIDE", GL_VERTEX_BINDING_STRIDE},
        {"GL_VERTEX_BINDING_BUFFER", GL_VERTEX_BINDING_BUFFER},
        {"GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET", GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET},
        {"GL_MAX_VERTEX_ATTRIB_BINDINGS", GL_MAX_VERTEX_ATTRIB_BINDINGS},
        {"GL_MAX_VERTEX_ATTRIB_STRIDE", GL_MAX_VERTEX_ATTRIB_STRIDE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ES_VERSION_3_1 */
#endif /* _PYCGLES2_GL_ES_VERSION_3_1_H_ */

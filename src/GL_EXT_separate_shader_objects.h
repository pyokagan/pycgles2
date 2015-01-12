#ifndef _PYCGLES2_GL_EXT_SEPARATE_SHADER_OBJECTS_H_
#define _PYCGLES2_GL_EXT_SEPARATE_SHADER_OBJECTS_H_
#ifdef GL_EXT_separate_shader_objects
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glActiveShaderProgramEXT */
static PyObject *
PyCGLES2_glActiveShaderProgramEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glActiveShaderProgramEXT (GLuint pipeline, GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glActiveShaderProgramEXT");
    return NULL;
}


/* TODO(NotImplemented): glBindProgramPipelineEXT */
static PyObject *
PyCGLES2_glBindProgramPipelineEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glBindProgramPipelineEXT (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glBindProgramPipelineEXT");
    return NULL;
}


/* TODO(NotImplemented): glCreateShaderProgramvEXT */
static PyObject *
PyCGLES2_glCreateShaderProgramvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glCreateShaderProgramvEXT (GLenum type, GLsizei count, const GLchar **strings) */
    PyErr_SetString(PyExc_NotImplementedError, "glCreateShaderProgramvEXT");
    return NULL;
}


/* TODO(NotImplemented): glDeleteProgramPipelinesEXT */
static PyObject *
PyCGLES2_glDeleteProgramPipelinesEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeleteProgramPipelinesEXT (GLsizei n, const GLuint *pipelines) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeleteProgramPipelinesEXT");
    return NULL;
}


/* TODO(NotImplemented): glGenProgramPipelinesEXT */
static PyObject *
PyCGLES2_glGenProgramPipelinesEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGenProgramPipelinesEXT (GLsizei n, GLuint *pipelines) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenProgramPipelinesEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramPipelineInfoLogEXT */
static PyObject *
PyCGLES2_glGetProgramPipelineInfoLogEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramPipelineInfoLogEXT (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramPipelineInfoLogEXT");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramPipelineivEXT */
static PyObject *
PyCGLES2_glGetProgramPipelineivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramPipelineivEXT (GLuint pipeline, GLenum pname, GLint *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramPipelineivEXT");
    return NULL;
}


/* TODO(NotImplemented): glIsProgramPipelineEXT */
static PyObject *
PyCGLES2_glIsProgramPipelineEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsProgramPipelineEXT (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsProgramPipelineEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramParameteriEXT */
static PyObject *
PyCGLES2_glProgramParameteriEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramParameteriEXT (GLuint program, GLenum pname, GLint value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramParameteriEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1fEXT */
static PyObject *
PyCGLES2_glProgramUniform1fEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1fEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1fvEXT */
static PyObject *
PyCGLES2_glProgramUniform1fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1iEXT */
static PyObject *
PyCGLES2_glProgramUniform1iEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1iEXT (GLuint program, GLint location, GLint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1iEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1ivEXT */
static PyObject *
PyCGLES2_glProgramUniform1ivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1ivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2fEXT */
static PyObject *
PyCGLES2_glProgramUniform2fEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2fEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2fvEXT */
static PyObject *
PyCGLES2_glProgramUniform2fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2iEXT */
static PyObject *
PyCGLES2_glProgramUniform2iEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2iEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2ivEXT */
static PyObject *
PyCGLES2_glProgramUniform2ivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2ivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3fEXT */
static PyObject *
PyCGLES2_glProgramUniform3fEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3fEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3fvEXT */
static PyObject *
PyCGLES2_glProgramUniform3fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3iEXT */
static PyObject *
PyCGLES2_glProgramUniform3iEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3iEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3ivEXT */
static PyObject *
PyCGLES2_glProgramUniform3ivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3ivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4fEXT */
static PyObject *
PyCGLES2_glProgramUniform4fEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4fEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4fvEXT */
static PyObject *
PyCGLES2_glProgramUniform4fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4iEXT */
static PyObject *
PyCGLES2_glProgramUniform4iEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4iEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4ivEXT */
static PyObject *
PyCGLES2_glProgramUniform4ivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4ivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix2fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix3fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix4fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glUseProgramStagesEXT */
static PyObject *
PyCGLES2_glUseProgramStagesEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glUseProgramStagesEXT (GLuint pipeline, GLbitfield stages, GLuint program) */
    PyErr_SetString(PyExc_NotImplementedError, "glUseProgramStagesEXT");
    return NULL;
}


/* TODO(NotImplemented): glValidateProgramPipelineEXT */
static PyObject *
PyCGLES2_glValidateProgramPipelineEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glValidateProgramPipelineEXT (GLuint pipeline) */
    PyErr_SetString(PyExc_NotImplementedError, "glValidateProgramPipelineEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1uiEXT */
static PyObject *
PyCGLES2_glProgramUniform1uiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1uiEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2uiEXT */
static PyObject *
PyCGLES2_glProgramUniform2uiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2uiEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3uiEXT */
static PyObject *
PyCGLES2_glProgramUniform3uiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3uiEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4uiEXT */
static PyObject *
PyCGLES2_glProgramUniform4uiEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4uiEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform1uivEXT */
static PyObject *
PyCGLES2_glProgramUniform1uivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform1uivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform2uivEXT */
static PyObject *
PyCGLES2_glProgramUniform2uivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform2uivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform3uivEXT */
static PyObject *
PyCGLES2_glProgramUniform3uivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform3uivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniform4uivEXT */
static PyObject *
PyCGLES2_glProgramUniform4uivEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniform4uivEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2x3fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix2x3fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2x3fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3x2fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix3x2fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3x2fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix2x4fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix2x4fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix2x4fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4x2fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix4x2fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4x2fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix3x4fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix3x4fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix3x4fvEXT");
    return NULL;
}


/* TODO(NotImplemented): glProgramUniformMatrix4x3fvEXT */
static PyObject *
PyCGLES2_glProgramUniformMatrix4x3fvEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramUniformMatrix4x3fvEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_separate_shader_objects(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_VERTEX_SHADER_BIT_EXT", GL_VERTEX_SHADER_BIT_EXT},
        {"GL_FRAGMENT_SHADER_BIT_EXT", GL_FRAGMENT_SHADER_BIT_EXT},
        {"GL_ALL_SHADER_BITS_EXT", GL_ALL_SHADER_BITS_EXT},
        {"GL_PROGRAM_SEPARABLE_EXT", GL_PROGRAM_SEPARABLE_EXT},
        {"GL_ACTIVE_PROGRAM_EXT", GL_ACTIVE_PROGRAM_EXT},
        {"GL_PROGRAM_PIPELINE_BINDING_EXT", GL_PROGRAM_PIPELINE_BINDING_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_separate_shader_objects */
#endif /* _PYCGLES2_GL_EXT_SEPARATE_SHADER_OBJECTS_H_ */

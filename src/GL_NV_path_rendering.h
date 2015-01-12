#ifndef _PYCGLES2_GL_NV_PATH_RENDERING_H_
#define _PYCGLES2_GL_NV_PATH_RENDERING_H_
#ifdef GL_NV_path_rendering
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glGenPathsNV */
static PyObject *
PyCGLES2_glGenPathsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLuint glGenPathsNV (GLsizei range) */
    PyErr_SetString(PyExc_NotImplementedError, "glGenPathsNV");
    return NULL;
}


/* TODO(NotImplemented): glDeletePathsNV */
static PyObject *
PyCGLES2_glDeletePathsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glDeletePathsNV (GLuint path, GLsizei range) */
    PyErr_SetString(PyExc_NotImplementedError, "glDeletePathsNV");
    return NULL;
}


/* TODO(NotImplemented): glIsPathNV */
static PyObject *
PyCGLES2_glIsPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsPathNV (GLuint path) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsPathNV");
    return NULL;
}


/* TODO(NotImplemented): glPathCommandsNV */
static PyObject *
PyCGLES2_glPathCommandsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathCommandsNV");
    return NULL;
}


/* TODO(NotImplemented): glPathCoordsNV */
static PyObject *
PyCGLES2_glPathCoordsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathCoordsNV");
    return NULL;
}


/* TODO(NotImplemented): glPathSubCommandsNV */
static PyObject *
PyCGLES2_glPathSubCommandsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathSubCommandsNV");
    return NULL;
}


/* TODO(NotImplemented): glPathSubCoordsNV */
static PyObject *
PyCGLES2_glPathSubCoordsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathSubCoordsNV");
    return NULL;
}


/* TODO(NotImplemented): glPathStringNV */
static PyObject *
PyCGLES2_glPathStringNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathStringNV (GLuint path, GLenum format, GLsizei length, const void *pathString) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathStringNV");
    return NULL;
}


/* TODO(NotImplemented): glPathGlyphsNV */
static PyObject *
PyCGLES2_glPathGlyphsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathGlyphsNV");
    return NULL;
}


/* TODO(NotImplemented): glPathGlyphRangeNV */
static PyObject *
PyCGLES2_glPathGlyphRangeNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathGlyphRangeNV");
    return NULL;
}


/* TODO(NotImplemented): glWeightPathsNV */
static PyObject *
PyCGLES2_glWeightPathsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights) */
    PyErr_SetString(PyExc_NotImplementedError, "glWeightPathsNV");
    return NULL;
}


/* TODO(NotImplemented): glCopyPathNV */
static PyObject *
PyCGLES2_glCopyPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyPathNV (GLuint resultPath, GLuint srcPath) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyPathNV");
    return NULL;
}


/* TODO(NotImplemented): glInterpolatePathsNV */
static PyObject *
PyCGLES2_glInterpolatePathsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) */
    PyErr_SetString(PyExc_NotImplementedError, "glInterpolatePathsNV");
    return NULL;
}


/* TODO(NotImplemented): glTransformPathNV */
static PyObject *
PyCGLES2_glTransformPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glTransformPathNV");
    return NULL;
}


/* TODO(NotImplemented): glPathParameterivNV */
static PyObject *
PyCGLES2_glPathParameterivNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathParameterivNV (GLuint path, GLenum pname, const GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathParameterivNV");
    return NULL;
}


/* TODO(NotImplemented): glPathParameteriNV */
static PyObject *
PyCGLES2_glPathParameteriNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathParameteriNV (GLuint path, GLenum pname, GLint value) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathParameteriNV");
    return NULL;
}


/* TODO(NotImplemented): glPathParameterfvNV */
static PyObject *
PyCGLES2_glPathParameterfvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathParameterfvNV");
    return NULL;
}


/* TODO(NotImplemented): glPathParameterfNV */
static PyObject *
PyCGLES2_glPathParameterfNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathParameterfNV (GLuint path, GLenum pname, GLfloat value) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathParameterfNV");
    return NULL;
}


/* TODO(NotImplemented): glPathDashArrayNV */
static PyObject *
PyCGLES2_glPathDashArrayNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat *dashArray) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathDashArrayNV");
    return NULL;
}


/* TODO(NotImplemented): glPathStencilFuncNV */
static PyObject *
PyCGLES2_glPathStencilFuncNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathStencilFuncNV");
    return NULL;
}


/* TODO(NotImplemented): glPathStencilDepthOffsetNV */
static PyObject *
PyCGLES2_glPathStencilDepthOffsetNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathStencilDepthOffsetNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilFillPathNV */
static PyObject *
PyCGLES2_glStencilFillPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilFillPathNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilStrokePathNV */
static PyObject *
PyCGLES2_glStencilStrokePathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilStrokePathNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilFillPathInstancedNV */
static PyObject *
PyCGLES2_glStencilFillPathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilFillPathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilStrokePathInstancedNV */
static PyObject *
PyCGLES2_glStencilStrokePathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilStrokePathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glPathCoverDepthFuncNV */
static PyObject *
PyCGLES2_glPathCoverDepthFuncNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPathCoverDepthFuncNV (GLenum func) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathCoverDepthFuncNV");
    return NULL;
}


/* TODO(NotImplemented): glCoverFillPathNV */
static PyObject *
PyCGLES2_glCoverFillPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverFillPathNV (GLuint path, GLenum coverMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverFillPathNV");
    return NULL;
}


/* TODO(NotImplemented): glCoverStrokePathNV */
static PyObject *
PyCGLES2_glCoverStrokePathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverStrokePathNV (GLuint path, GLenum coverMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverStrokePathNV");
    return NULL;
}


/* TODO(NotImplemented): glCoverFillPathInstancedNV */
static PyObject *
PyCGLES2_glCoverFillPathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverFillPathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glCoverStrokePathInstancedNV */
static PyObject *
PyCGLES2_glCoverStrokePathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glCoverStrokePathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathParameterivNV */
static PyObject *
PyCGLES2_glGetPathParameterivNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathParameterivNV (GLuint path, GLenum pname, GLint *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathParameterivNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathParameterfvNV */
static PyObject *
PyCGLES2_glGetPathParameterfvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat *value) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathParameterfvNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathCommandsNV */
static PyObject *
PyCGLES2_glGetPathCommandsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathCommandsNV (GLuint path, GLubyte *commands) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathCommandsNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathCoordsNV */
static PyObject *
PyCGLES2_glGetPathCoordsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathCoordsNV (GLuint path, GLfloat *coords) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathCoordsNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathDashArrayNV */
static PyObject *
PyCGLES2_glGetPathDashArrayNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathDashArrayNV (GLuint path, GLfloat *dashArray) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathDashArrayNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathMetricsNV */
static PyObject *
PyCGLES2_glGetPathMetricsNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathMetricsNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathMetricRangeNV */
static PyObject *
PyCGLES2_glGetPathMetricRangeNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathMetricRangeNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathSpacingNV */
static PyObject *
PyCGLES2_glGetPathSpacingNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathSpacingNV");
    return NULL;
}


/* TODO(NotImplemented): glIsPointInFillPathNV */
static PyObject *
PyCGLES2_glIsPointInFillPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsPointInFillPathNV");
    return NULL;
}


/* TODO(NotImplemented): glIsPointInStrokePathNV */
static PyObject *
PyCGLES2_glIsPointInStrokePathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y) */
    PyErr_SetString(PyExc_NotImplementedError, "glIsPointInStrokePathNV");
    return NULL;
}


/* TODO(NotImplemented): glGetPathLengthNV */
static PyObject *
PyCGLES2_glGetPathLengthNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLfloat glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetPathLengthNV");
    return NULL;
}


/* TODO(NotImplemented): glPointAlongPathNV */
static PyObject *
PyCGLES2_glPointAlongPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY) */
    PyErr_SetString(PyExc_NotImplementedError, "glPointAlongPathNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixLoad3x2fNV */
static PyObject *
PyCGLES2_glMatrixLoad3x2fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixLoad3x2fNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixLoad3x3fNV */
static PyObject *
PyCGLES2_glMatrixLoad3x3fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixLoad3x3fNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixLoadTranspose3x3fNV */
static PyObject *
PyCGLES2_glMatrixLoadTranspose3x3fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixLoadTranspose3x3fNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixMult3x2fNV */
static PyObject *
PyCGLES2_glMatrixMult3x2fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixMult3x2fNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixMult3x3fNV */
static PyObject *
PyCGLES2_glMatrixMult3x3fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixMult3x3fNV");
    return NULL;
}


/* TODO(NotImplemented): glMatrixMultTranspose3x3fNV */
static PyObject *
PyCGLES2_glMatrixMultTranspose3x3fNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat *m) */
    PyErr_SetString(PyExc_NotImplementedError, "glMatrixMultTranspose3x3fNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilThenCoverFillPathNV */
static PyObject *
PyCGLES2_glStencilThenCoverFillPathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilThenCoverFillPathNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilThenCoverStrokePathNV */
static PyObject *
PyCGLES2_glStencilThenCoverStrokePathNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilThenCoverStrokePathNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilThenCoverFillPathInstancedNV */
static PyObject *
PyCGLES2_glStencilThenCoverFillPathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilThenCoverFillPathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glStencilThenCoverStrokePathInstancedNV */
static PyObject *
PyCGLES2_glStencilThenCoverStrokePathInstancedNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) */
    PyErr_SetString(PyExc_NotImplementedError, "glStencilThenCoverStrokePathInstancedNV");
    return NULL;
}


/* TODO(NotImplemented): glPathGlyphIndexRangeNV */
static PyObject *
PyCGLES2_glPathGlyphIndexRangeNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glPathGlyphIndexRangeNV (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathGlyphIndexRangeNV");
    return NULL;
}


/* TODO(NotImplemented): glPathGlyphIndexArrayNV */
static PyObject *
PyCGLES2_glPathGlyphIndexArrayNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathGlyphIndexArrayNV");
    return NULL;
}


/* TODO(NotImplemented): glPathMemoryGlyphIndexArrayNV */
static PyObject *
PyCGLES2_glPathMemoryGlyphIndexArrayNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLenum glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) */
    PyErr_SetString(PyExc_NotImplementedError, "glPathMemoryGlyphIndexArrayNV");
    return NULL;
}


/* TODO(NotImplemented): glProgramPathFragmentInputGenNV */
static PyObject *
PyCGLES2_glProgramPathFragmentInputGenNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs) */
    PyErr_SetString(PyExc_NotImplementedError, "glProgramPathFragmentInputGenNV");
    return NULL;
}


/* TODO(NotImplemented): glGetProgramResourcefvNV */
static PyObject *
PyCGLES2_glGetProgramResourcefvNV(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetProgramResourcefvNV");
    return NULL;
}


static int
PyCGLES2_GL_NV_path_rendering(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PATH_FORMAT_SVG_NV", GL_PATH_FORMAT_SVG_NV},
        {"GL_PATH_FORMAT_PS_NV", GL_PATH_FORMAT_PS_NV},
        {"GL_STANDARD_FONT_NAME_NV", GL_STANDARD_FONT_NAME_NV},
        {"GL_SYSTEM_FONT_NAME_NV", GL_SYSTEM_FONT_NAME_NV},
        {"GL_FILE_NAME_NV", GL_FILE_NAME_NV},
        {"GL_PATH_STROKE_WIDTH_NV", GL_PATH_STROKE_WIDTH_NV},
        {"GL_PATH_END_CAPS_NV", GL_PATH_END_CAPS_NV},
        {"GL_PATH_INITIAL_END_CAP_NV", GL_PATH_INITIAL_END_CAP_NV},
        {"GL_PATH_TERMINAL_END_CAP_NV", GL_PATH_TERMINAL_END_CAP_NV},
        {"GL_PATH_JOIN_STYLE_NV", GL_PATH_JOIN_STYLE_NV},
        {"GL_PATH_MITER_LIMIT_NV", GL_PATH_MITER_LIMIT_NV},
        {"GL_PATH_DASH_CAPS_NV", GL_PATH_DASH_CAPS_NV},
        {"GL_PATH_INITIAL_DASH_CAP_NV", GL_PATH_INITIAL_DASH_CAP_NV},
        {"GL_PATH_TERMINAL_DASH_CAP_NV", GL_PATH_TERMINAL_DASH_CAP_NV},
        {"GL_PATH_DASH_OFFSET_NV", GL_PATH_DASH_OFFSET_NV},
        {"GL_PATH_CLIENT_LENGTH_NV", GL_PATH_CLIENT_LENGTH_NV},
        {"GL_PATH_FILL_MODE_NV", GL_PATH_FILL_MODE_NV},
        {"GL_PATH_FILL_MASK_NV", GL_PATH_FILL_MASK_NV},
        {"GL_PATH_FILL_COVER_MODE_NV", GL_PATH_FILL_COVER_MODE_NV},
        {"GL_PATH_STROKE_COVER_MODE_NV", GL_PATH_STROKE_COVER_MODE_NV},
        {"GL_PATH_STROKE_MASK_NV", GL_PATH_STROKE_MASK_NV},
        {"GL_COUNT_UP_NV", GL_COUNT_UP_NV},
        {"GL_COUNT_DOWN_NV", GL_COUNT_DOWN_NV},
        {"GL_PATH_OBJECT_BOUNDING_BOX_NV", GL_PATH_OBJECT_BOUNDING_BOX_NV},
        {"GL_CONVEX_HULL_NV", GL_CONVEX_HULL_NV},
        {"GL_BOUNDING_BOX_NV", GL_BOUNDING_BOX_NV},
        {"GL_TRANSLATE_X_NV", GL_TRANSLATE_X_NV},
        {"GL_TRANSLATE_Y_NV", GL_TRANSLATE_Y_NV},
        {"GL_TRANSLATE_2D_NV", GL_TRANSLATE_2D_NV},
        {"GL_TRANSLATE_3D_NV", GL_TRANSLATE_3D_NV},
        {"GL_AFFINE_2D_NV", GL_AFFINE_2D_NV},
        {"GL_AFFINE_3D_NV", GL_AFFINE_3D_NV},
        {"GL_TRANSPOSE_AFFINE_2D_NV", GL_TRANSPOSE_AFFINE_2D_NV},
        {"GL_TRANSPOSE_AFFINE_3D_NV", GL_TRANSPOSE_AFFINE_3D_NV},
        {"GL_UTF8_NV", GL_UTF8_NV},
        {"GL_UTF16_NV", GL_UTF16_NV},
        {"GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV", GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV},
        {"GL_PATH_COMMAND_COUNT_NV", GL_PATH_COMMAND_COUNT_NV},
        {"GL_PATH_COORD_COUNT_NV", GL_PATH_COORD_COUNT_NV},
        {"GL_PATH_DASH_ARRAY_COUNT_NV", GL_PATH_DASH_ARRAY_COUNT_NV},
        {"GL_PATH_COMPUTED_LENGTH_NV", GL_PATH_COMPUTED_LENGTH_NV},
        {"GL_PATH_FILL_BOUNDING_BOX_NV", GL_PATH_FILL_BOUNDING_BOX_NV},
        {"GL_PATH_STROKE_BOUNDING_BOX_NV", GL_PATH_STROKE_BOUNDING_BOX_NV},
        {"GL_SQUARE_NV", GL_SQUARE_NV},
        {"GL_ROUND_NV", GL_ROUND_NV},
        {"GL_TRIANGULAR_NV", GL_TRIANGULAR_NV},
        {"GL_BEVEL_NV", GL_BEVEL_NV},
        {"GL_MITER_REVERT_NV", GL_MITER_REVERT_NV},
        {"GL_MITER_TRUNCATE_NV", GL_MITER_TRUNCATE_NV},
        {"GL_SKIP_MISSING_GLYPH_NV", GL_SKIP_MISSING_GLYPH_NV},
        {"GL_USE_MISSING_GLYPH_NV", GL_USE_MISSING_GLYPH_NV},
        {"GL_PATH_ERROR_POSITION_NV", GL_PATH_ERROR_POSITION_NV},
        {"GL_ACCUM_ADJACENT_PAIRS_NV", GL_ACCUM_ADJACENT_PAIRS_NV},
        {"GL_ADJACENT_PAIRS_NV", GL_ADJACENT_PAIRS_NV},
        {"GL_FIRST_TO_REST_NV", GL_FIRST_TO_REST_NV},
        {"GL_PATH_GEN_MODE_NV", GL_PATH_GEN_MODE_NV},
        {"GL_PATH_GEN_COEFF_NV", GL_PATH_GEN_COEFF_NV},
        {"GL_PATH_GEN_COMPONENTS_NV", GL_PATH_GEN_COMPONENTS_NV},
        {"GL_PATH_STENCIL_FUNC_NV", GL_PATH_STENCIL_FUNC_NV},
        {"GL_PATH_STENCIL_REF_NV", GL_PATH_STENCIL_REF_NV},
        {"GL_PATH_STENCIL_VALUE_MASK_NV", GL_PATH_STENCIL_VALUE_MASK_NV},
        {"GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV", GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV},
        {"GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV", GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV},
        {"GL_PATH_COVER_DEPTH_FUNC_NV", GL_PATH_COVER_DEPTH_FUNC_NV},
        {"GL_PATH_DASH_OFFSET_RESET_NV", GL_PATH_DASH_OFFSET_RESET_NV},
        {"GL_MOVE_TO_RESETS_NV", GL_MOVE_TO_RESETS_NV},
        {"GL_MOVE_TO_CONTINUES_NV", GL_MOVE_TO_CONTINUES_NV},
        {"GL_CLOSE_PATH_NV", GL_CLOSE_PATH_NV},
        {"GL_MOVE_TO_NV", GL_MOVE_TO_NV},
        {"GL_RELATIVE_MOVE_TO_NV", GL_RELATIVE_MOVE_TO_NV},
        {"GL_LINE_TO_NV", GL_LINE_TO_NV},
        {"GL_RELATIVE_LINE_TO_NV", GL_RELATIVE_LINE_TO_NV},
        {"GL_HORIZONTAL_LINE_TO_NV", GL_HORIZONTAL_LINE_TO_NV},
        {"GL_RELATIVE_HORIZONTAL_LINE_TO_NV", GL_RELATIVE_HORIZONTAL_LINE_TO_NV},
        {"GL_VERTICAL_LINE_TO_NV", GL_VERTICAL_LINE_TO_NV},
        {"GL_RELATIVE_VERTICAL_LINE_TO_NV", GL_RELATIVE_VERTICAL_LINE_TO_NV},
        {"GL_QUADRATIC_CURVE_TO_NV", GL_QUADRATIC_CURVE_TO_NV},
        {"GL_RELATIVE_QUADRATIC_CURVE_TO_NV", GL_RELATIVE_QUADRATIC_CURVE_TO_NV},
        {"GL_CUBIC_CURVE_TO_NV", GL_CUBIC_CURVE_TO_NV},
        {"GL_RELATIVE_CUBIC_CURVE_TO_NV", GL_RELATIVE_CUBIC_CURVE_TO_NV},
        {"GL_SMOOTH_QUADRATIC_CURVE_TO_NV", GL_SMOOTH_QUADRATIC_CURVE_TO_NV},
        {"GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV", GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV},
        {"GL_SMOOTH_CUBIC_CURVE_TO_NV", GL_SMOOTH_CUBIC_CURVE_TO_NV},
        {"GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV", GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV},
        {"GL_SMALL_CCW_ARC_TO_NV", GL_SMALL_CCW_ARC_TO_NV},
        {"GL_RELATIVE_SMALL_CCW_ARC_TO_NV", GL_RELATIVE_SMALL_CCW_ARC_TO_NV},
        {"GL_SMALL_CW_ARC_TO_NV", GL_SMALL_CW_ARC_TO_NV},
        {"GL_RELATIVE_SMALL_CW_ARC_TO_NV", GL_RELATIVE_SMALL_CW_ARC_TO_NV},
        {"GL_LARGE_CCW_ARC_TO_NV", GL_LARGE_CCW_ARC_TO_NV},
        {"GL_RELATIVE_LARGE_CCW_ARC_TO_NV", GL_RELATIVE_LARGE_CCW_ARC_TO_NV},
        {"GL_LARGE_CW_ARC_TO_NV", GL_LARGE_CW_ARC_TO_NV},
        {"GL_RELATIVE_LARGE_CW_ARC_TO_NV", GL_RELATIVE_LARGE_CW_ARC_TO_NV},
        {"GL_RESTART_PATH_NV", GL_RESTART_PATH_NV},
        {"GL_DUP_FIRST_CUBIC_CURVE_TO_NV", GL_DUP_FIRST_CUBIC_CURVE_TO_NV},
        {"GL_DUP_LAST_CUBIC_CURVE_TO_NV", GL_DUP_LAST_CUBIC_CURVE_TO_NV},
        {"GL_RECT_NV", GL_RECT_NV},
        {"GL_CIRCULAR_CCW_ARC_TO_NV", GL_CIRCULAR_CCW_ARC_TO_NV},
        {"GL_CIRCULAR_CW_ARC_TO_NV", GL_CIRCULAR_CW_ARC_TO_NV},
        {"GL_CIRCULAR_TANGENT_ARC_TO_NV", GL_CIRCULAR_TANGENT_ARC_TO_NV},
        {"GL_ARC_TO_NV", GL_ARC_TO_NV},
        {"GL_RELATIVE_ARC_TO_NV", GL_RELATIVE_ARC_TO_NV},
        {"GL_BOLD_BIT_NV", GL_BOLD_BIT_NV},
        {"GL_ITALIC_BIT_NV", GL_ITALIC_BIT_NV},
        {"GL_GLYPH_WIDTH_BIT_NV", GL_GLYPH_WIDTH_BIT_NV},
        {"GL_GLYPH_HEIGHT_BIT_NV", GL_GLYPH_HEIGHT_BIT_NV},
        {"GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV", GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV},
        {"GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV", GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV},
        {"GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV", GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV},
        {"GL_GLYPH_VERTICAL_BEARING_X_BIT_NV", GL_GLYPH_VERTICAL_BEARING_X_BIT_NV},
        {"GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV", GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV},
        {"GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV", GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV},
        {"GL_GLYPH_HAS_KERNING_BIT_NV", GL_GLYPH_HAS_KERNING_BIT_NV},
        {"GL_FONT_X_MIN_BOUNDS_BIT_NV", GL_FONT_X_MIN_BOUNDS_BIT_NV},
        {"GL_FONT_Y_MIN_BOUNDS_BIT_NV", GL_FONT_Y_MIN_BOUNDS_BIT_NV},
        {"GL_FONT_X_MAX_BOUNDS_BIT_NV", GL_FONT_X_MAX_BOUNDS_BIT_NV},
        {"GL_FONT_Y_MAX_BOUNDS_BIT_NV", GL_FONT_Y_MAX_BOUNDS_BIT_NV},
        {"GL_FONT_UNITS_PER_EM_BIT_NV", GL_FONT_UNITS_PER_EM_BIT_NV},
        {"GL_FONT_ASCENDER_BIT_NV", GL_FONT_ASCENDER_BIT_NV},
        {"GL_FONT_DESCENDER_BIT_NV", GL_FONT_DESCENDER_BIT_NV},
        {"GL_FONT_HEIGHT_BIT_NV", GL_FONT_HEIGHT_BIT_NV},
        {"GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV", GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV},
        {"GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV", GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV},
        {"GL_FONT_UNDERLINE_POSITION_BIT_NV", GL_FONT_UNDERLINE_POSITION_BIT_NV},
        {"GL_FONT_UNDERLINE_THICKNESS_BIT_NV", GL_FONT_UNDERLINE_THICKNESS_BIT_NV},
        {"GL_FONT_HAS_KERNING_BIT_NV", GL_FONT_HAS_KERNING_BIT_NV},
        {"GL_ROUNDED_RECT_NV", GL_ROUNDED_RECT_NV},
        {"GL_RELATIVE_ROUNDED_RECT_NV", GL_RELATIVE_ROUNDED_RECT_NV},
        {"GL_ROUNDED_RECT2_NV", GL_ROUNDED_RECT2_NV},
        {"GL_RELATIVE_ROUNDED_RECT2_NV", GL_RELATIVE_ROUNDED_RECT2_NV},
        {"GL_ROUNDED_RECT4_NV", GL_ROUNDED_RECT4_NV},
        {"GL_RELATIVE_ROUNDED_RECT4_NV", GL_RELATIVE_ROUNDED_RECT4_NV},
        {"GL_ROUNDED_RECT8_NV", GL_ROUNDED_RECT8_NV},
        {"GL_RELATIVE_ROUNDED_RECT8_NV", GL_RELATIVE_ROUNDED_RECT8_NV},
        {"GL_RELATIVE_RECT_NV", GL_RELATIVE_RECT_NV},
        {"GL_FONT_GLYPHS_AVAILABLE_NV", GL_FONT_GLYPHS_AVAILABLE_NV},
        {"GL_FONT_TARGET_UNAVAILABLE_NV", GL_FONT_TARGET_UNAVAILABLE_NV},
        {"GL_FONT_UNAVAILABLE_NV", GL_FONT_UNAVAILABLE_NV},
        {"GL_FONT_UNINTELLIGIBLE_NV", GL_FONT_UNINTELLIGIBLE_NV},
        {"GL_CONIC_CURVE_TO_NV", GL_CONIC_CURVE_TO_NV},
        {"GL_RELATIVE_CONIC_CURVE_TO_NV", GL_RELATIVE_CONIC_CURVE_TO_NV},
        {"GL_FONT_NUM_GLYPH_INDICES_BIT_NV", GL_FONT_NUM_GLYPH_INDICES_BIT_NV},
        {"GL_STANDARD_FONT_FORMAT_NV", GL_STANDARD_FONT_FORMAT_NV},
        {"GL_PATH_PROJECTION_NV", GL_PATH_PROJECTION_NV},
        {"GL_PATH_MODELVIEW_NV", GL_PATH_MODELVIEW_NV},
        {"GL_PATH_MODELVIEW_STACK_DEPTH_NV", GL_PATH_MODELVIEW_STACK_DEPTH_NV},
        {"GL_PATH_MODELVIEW_MATRIX_NV", GL_PATH_MODELVIEW_MATRIX_NV},
        {"GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV", GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV},
        {"GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV", GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV},
        {"GL_PATH_PROJECTION_STACK_DEPTH_NV", GL_PATH_PROJECTION_STACK_DEPTH_NV},
        {"GL_PATH_PROJECTION_MATRIX_NV", GL_PATH_PROJECTION_MATRIX_NV},
        {"GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV", GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV},
        {"GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV", GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV},
        {"GL_FRAGMENT_INPUT_NV", GL_FRAGMENT_INPUT_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_path_rendering */
#endif /* _PYCGLES2_GL_NV_PATH_RENDERING_H_ */

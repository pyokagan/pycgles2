#ifndef _PYCGLES2_GL_EXT_DEBUG_MARKER_H_
#define _PYCGLES2_GL_EXT_DEBUG_MARKER_H_
#ifdef GL_EXT_debug_marker
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glInsertEventMarkerEXT */
static PyObject *
PyCGLES2_glInsertEventMarkerEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glInsertEventMarkerEXT (GLsizei length, const GLchar *marker) */
    PyErr_SetString(PyExc_NotImplementedError, "glInsertEventMarkerEXT");
    return NULL;
}


/* TODO(NotImplemented): glPushGroupMarkerEXT */
static PyObject *
PyCGLES2_glPushGroupMarkerEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPushGroupMarkerEXT (GLsizei length, const GLchar *marker) */
    PyErr_SetString(PyExc_NotImplementedError, "glPushGroupMarkerEXT");
    return NULL;
}


/* TODO(NotImplemented): glPopGroupMarkerEXT */
static PyObject *
PyCGLES2_glPopGroupMarkerEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPopGroupMarkerEXT () */
    PyErr_SetString(PyExc_NotImplementedError, "glPopGroupMarkerEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_debug_marker(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_debug_marker */
#endif /* _PYCGLES2_GL_EXT_DEBUG_MARKER_H_ */

#ifndef _PYCGLES2_GL_OES_MAPBUFFER_H_
#define _PYCGLES2_GL_OES_MAPBUFFER_H_
#ifdef GL_OES_mapbuffer
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glMapBufferOES */
static PyObject *
PyCGLES2_glMapBufferOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void *glMapBufferOES (GLenum target, GLenum access) */
    PyErr_SetString(PyExc_NotImplementedError, "glMapBufferOES");
    return NULL;
}


/* TODO(NotImplemented): glUnmapBufferOES */
static PyObject *
PyCGLES2_glUnmapBufferOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* GLboolean glUnmapBufferOES (GLenum target) */
    PyErr_SetString(PyExc_NotImplementedError, "glUnmapBufferOES");
    return NULL;
}


/* TODO(NotImplemented): glGetBufferPointervOES */
static PyObject *
PyCGLES2_glGetBufferPointervOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glGetBufferPointervOES (GLenum target, GLenum pname, void **params) */
    PyErr_SetString(PyExc_NotImplementedError, "glGetBufferPointervOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_mapbuffer(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_WRITE_ONLY_OES", GL_WRITE_ONLY_OES},
        {"GL_BUFFER_ACCESS_OES", GL_BUFFER_ACCESS_OES},
        {"GL_BUFFER_MAPPED_OES", GL_BUFFER_MAPPED_OES},
        {"GL_BUFFER_MAP_POINTER_OES", GL_BUFFER_MAP_POINTER_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_mapbuffer */
#endif /* _PYCGLES2_GL_OES_MAPBUFFER_H_ */

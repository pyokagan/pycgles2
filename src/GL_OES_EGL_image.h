#ifndef _PYCGLES2_GL_OES_EGL_IMAGE_H_
#define _PYCGLES2_GL_OES_EGL_IMAGE_H_
#ifdef GL_OES_EGL_image
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glEGLImageTargetTexture2DOES */
static PyObject *
PyCGLES2_glEGLImageTargetTexture2DOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image) */
    PyErr_SetString(PyExc_NotImplementedError, "glEGLImageTargetTexture2DOES");
    return NULL;
}


/* TODO(NotImplemented): glEGLImageTargetRenderbufferStorageOES */
static PyObject *
PyCGLES2_glEGLImageTargetRenderbufferStorageOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image) */
    PyErr_SetString(PyExc_NotImplementedError, "glEGLImageTargetRenderbufferStorageOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_EGL_image(PyObject *m)
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


#endif /* GL_OES_EGL_image */
#endif /* _PYCGLES2_GL_OES_EGL_IMAGE_H_ */

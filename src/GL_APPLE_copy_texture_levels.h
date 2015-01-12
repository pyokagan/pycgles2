#ifndef _PYCGLES2_GL_APPLE_COPY_TEXTURE_LEVELS_H_
#define _PYCGLES2_GL_APPLE_COPY_TEXTURE_LEVELS_H_
#ifdef GL_APPLE_copy_texture_levels
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glCopyTextureLevelsAPPLE */
static PyObject *
PyCGLES2_glCopyTextureLevelsAPPLE(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyTextureLevelsAPPLE");
    return NULL;
}


static int
PyCGLES2_GL_APPLE_copy_texture_levels(PyObject *m)
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


#endif /* GL_APPLE_copy_texture_levels */
#endif /* _PYCGLES2_GL_APPLE_COPY_TEXTURE_LEVELS_H_ */

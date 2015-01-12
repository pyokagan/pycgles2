#ifndef _PYCGLES2_GL_EXT_TEXTURE_VIEW_H_
#define _PYCGLES2_GL_EXT_TEXTURE_VIEW_H_
#ifdef GL_EXT_texture_view
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTextureViewEXT */
static PyObject *
PyCGLES2_glTextureViewEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTextureViewEXT (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) */
    PyErr_SetString(PyExc_NotImplementedError, "glTextureViewEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_texture_view(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_VIEW_MIN_LEVEL_EXT", GL_TEXTURE_VIEW_MIN_LEVEL_EXT},
        {"GL_TEXTURE_VIEW_NUM_LEVELS_EXT", GL_TEXTURE_VIEW_NUM_LEVELS_EXT},
        {"GL_TEXTURE_VIEW_MIN_LAYER_EXT", GL_TEXTURE_VIEW_MIN_LAYER_EXT},
        {"GL_TEXTURE_VIEW_NUM_LAYERS_EXT", GL_TEXTURE_VIEW_NUM_LAYERS_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_view */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_VIEW_H_ */

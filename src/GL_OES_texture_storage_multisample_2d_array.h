#ifndef _PYCGLES2_GL_OES_TEXTURE_STORAGE_MULTISAMPLE_2D_ARRAY_H_
#define _PYCGLES2_GL_OES_TEXTURE_STORAGE_MULTISAMPLE_2D_ARRAY_H_
#ifdef GL_OES_texture_storage_multisample_2d_array
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glTexStorage3DMultisampleOES */
static PyObject *
PyCGLES2_glTexStorage3DMultisampleOES(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) */
    PyErr_SetString(PyExc_NotImplementedError, "glTexStorage3DMultisampleOES");
    return NULL;
}


static int
PyCGLES2_GL_OES_texture_storage_multisample_2d_array(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES", GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES},
        {"GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES", GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES},
        {"GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES", GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES},
        {"GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES", GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES},
        {"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES", GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_texture_storage_multisample_2d_array */
#endif /* _PYCGLES2_GL_OES_TEXTURE_STORAGE_MULTISAMPLE_2D_ARRAY_H_ */

#ifndef _PYCGLES2_GL_EXT_COPY_IMAGE_H_
#define _PYCGLES2_GL_EXT_COPY_IMAGE_H_
#ifdef GL_EXT_copy_image
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glCopyImageSubDataEXT */
static PyObject *
PyCGLES2_glCopyImageSubDataEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) */
    PyErr_SetString(PyExc_NotImplementedError, "glCopyImageSubDataEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_copy_image(PyObject *m)
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


#endif /* GL_EXT_copy_image */
#endif /* _PYCGLES2_GL_EXT_COPY_IMAGE_H_ */

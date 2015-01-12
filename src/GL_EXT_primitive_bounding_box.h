#ifndef _PYCGLES2_GL_EXT_PRIMITIVE_BOUNDING_BOX_H_
#define _PYCGLES2_GL_EXT_PRIMITIVE_BOUNDING_BOX_H_
#ifdef GL_EXT_primitive_bounding_box
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glPrimitiveBoundingBoxEXT */
static PyObject *
PyCGLES2_glPrimitiveBoundingBoxEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) */
    PyErr_SetString(PyExc_NotImplementedError, "glPrimitiveBoundingBoxEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_primitive_bounding_box(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PRIMITIVE_BOUNDING_BOX_EXT", GL_PRIMITIVE_BOUNDING_BOX_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_primitive_bounding_box */
#endif /* _PYCGLES2_GL_EXT_PRIMITIVE_BOUNDING_BOX_H_ */

#ifndef _PYCGLES2_GL_EXT_GEOMETRY_POINT_SIZE_H_
#define _PYCGLES2_GL_EXT_GEOMETRY_POINT_SIZE_H_
#ifdef GL_EXT_geometry_point_size
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_geometry_point_size(PyObject *m)
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


#endif /* GL_EXT_geometry_point_size */
#endif /* _PYCGLES2_GL_EXT_GEOMETRY_POINT_SIZE_H_ */

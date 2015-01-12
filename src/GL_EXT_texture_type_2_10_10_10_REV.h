#ifndef _PYCGLES2_GL_EXT_TEXTURE_TYPE_2_10_10_10_REV_H_
#define _PYCGLES2_GL_EXT_TEXTURE_TYPE_2_10_10_10_REV_H_
#ifdef GL_EXT_texture_type_2_10_10_10_REV
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_type_2_10_10_10_REV(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_UNSIGNED_INT_2_10_10_10_REV_EXT", GL_UNSIGNED_INT_2_10_10_10_REV_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_type_2_10_10_10_REV */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_TYPE_2_10_10_10_REV_H_ */

#ifndef _PYCGLES2_GL_EXT_UNPACK_SUBIMAGE_H_
#define _PYCGLES2_GL_EXT_UNPACK_SUBIMAGE_H_
#ifdef GL_EXT_unpack_subimage
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_unpack_subimage(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_UNPACK_ROW_LENGTH_EXT", GL_UNPACK_ROW_LENGTH_EXT},
        {"GL_UNPACK_SKIP_ROWS_EXT", GL_UNPACK_SKIP_ROWS_EXT},
        {"GL_UNPACK_SKIP_PIXELS_EXT", GL_UNPACK_SKIP_PIXELS_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_unpack_subimage */
#endif /* _PYCGLES2_GL_EXT_UNPACK_SUBIMAGE_H_ */

#ifndef _PYCGLES2_GL_ANGLE_PACK_REVERSE_ROW_ORDER_H_
#define _PYCGLES2_GL_ANGLE_PACK_REVERSE_ROW_ORDER_H_
#ifdef GL_ANGLE_pack_reverse_row_order
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_ANGLE_pack_reverse_row_order(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PACK_REVERSE_ROW_ORDER_ANGLE", GL_PACK_REVERSE_ROW_ORDER_ANGLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_ANGLE_pack_reverse_row_order */
#endif /* _PYCGLES2_GL_ANGLE_PACK_REVERSE_ROW_ORDER_H_ */

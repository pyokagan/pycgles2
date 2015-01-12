#ifndef _PYCGLES2_GL_OES_VERTEX_TYPE_10_10_10_2_H_
#define _PYCGLES2_GL_OES_VERTEX_TYPE_10_10_10_2_H_
#ifdef GL_OES_vertex_type_10_10_10_2
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_vertex_type_10_10_10_2(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_UNSIGNED_INT_10_10_10_2_OES", GL_UNSIGNED_INT_10_10_10_2_OES},
        {"GL_INT_10_10_10_2_OES", GL_INT_10_10_10_2_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_vertex_type_10_10_10_2 */
#endif /* _PYCGLES2_GL_OES_VERTEX_TYPE_10_10_10_2_H_ */

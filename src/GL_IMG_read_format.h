#ifndef _PYCGLES2_GL_IMG_READ_FORMAT_H_
#define _PYCGLES2_GL_IMG_READ_FORMAT_H_
#ifdef GL_IMG_read_format
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_IMG_read_format(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_BGRA_IMG", GL_BGRA_IMG},
        {"GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG", GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_IMG_read_format */
#endif /* _PYCGLES2_GL_IMG_READ_FORMAT_H_ */

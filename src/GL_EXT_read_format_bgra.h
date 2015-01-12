#ifndef _PYCGLES2_GL_EXT_READ_FORMAT_BGRA_H_
#define _PYCGLES2_GL_EXT_READ_FORMAT_BGRA_H_
#ifdef GL_EXT_read_format_bgra
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_read_format_bgra(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT", GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT},
        {"GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT", GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_read_format_bgra */
#endif /* _PYCGLES2_GL_EXT_READ_FORMAT_BGRA_H_ */

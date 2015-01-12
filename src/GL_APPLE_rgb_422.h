#ifndef _PYCGLES2_GL_APPLE_RGB_422_H_
#define _PYCGLES2_GL_APPLE_RGB_422_H_
#ifdef GL_APPLE_rgb_422
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_APPLE_rgb_422(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_RGB_422_APPLE", GL_RGB_422_APPLE},
        {"GL_UNSIGNED_SHORT_8_8_APPLE", GL_UNSIGNED_SHORT_8_8_APPLE},
        {"GL_UNSIGNED_SHORT_8_8_REV_APPLE", GL_UNSIGNED_SHORT_8_8_REV_APPLE},
        {"GL_RGB_RAW_422_APPLE", GL_RGB_RAW_422_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_rgb_422 */
#endif /* _PYCGLES2_GL_APPLE_RGB_422_H_ */

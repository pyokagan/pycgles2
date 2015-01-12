#ifndef _PYCGLES2_GL_NV_IMAGE_FORMATS_H_
#define _PYCGLES2_GL_NV_IMAGE_FORMATS_H_
#ifdef GL_NV_image_formats
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_image_formats(PyObject *m)
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


#endif /* GL_NV_image_formats */
#endif /* _PYCGLES2_GL_NV_IMAGE_FORMATS_H_ */

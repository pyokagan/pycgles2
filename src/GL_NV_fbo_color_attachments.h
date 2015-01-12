#ifndef _PYCGLES2_GL_NV_FBO_COLOR_ATTACHMENTS_H_
#define _PYCGLES2_GL_NV_FBO_COLOR_ATTACHMENTS_H_
#ifdef GL_NV_fbo_color_attachments
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_fbo_color_attachments(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAX_COLOR_ATTACHMENTS_NV", GL_MAX_COLOR_ATTACHMENTS_NV},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_NV_fbo_color_attachments */
#endif /* _PYCGLES2_GL_NV_FBO_COLOR_ATTACHMENTS_H_ */

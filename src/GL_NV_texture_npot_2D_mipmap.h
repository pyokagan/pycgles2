#ifndef _PYCGLES2_GL_NV_TEXTURE_NPOT_2D_MIPMAP_H_
#define _PYCGLES2_GL_NV_TEXTURE_NPOT_2D_MIPMAP_H_
#ifdef GL_NV_texture_npot_2D_mipmap
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_NV_texture_npot_2D_mipmap(PyObject *m)
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


#endif /* GL_NV_texture_npot_2D_mipmap */
#endif /* _PYCGLES2_GL_NV_TEXTURE_NPOT_2D_MIPMAP_H_ */

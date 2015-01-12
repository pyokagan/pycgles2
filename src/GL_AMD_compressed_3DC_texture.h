#ifndef _PYCGLES2_GL_AMD_COMPRESSED_3DC_TEXTURE_H_
#define _PYCGLES2_GL_AMD_COMPRESSED_3DC_TEXTURE_H_
#ifdef GL_AMD_compressed_3DC_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_AMD_compressed_3DC_texture(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_3DC_X_AMD", GL_3DC_X_AMD},
        {"GL_3DC_XY_AMD", GL_3DC_XY_AMD},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_AMD_compressed_3DC_texture */
#endif /* _PYCGLES2_GL_AMD_COMPRESSED_3DC_TEXTURE_H_ */

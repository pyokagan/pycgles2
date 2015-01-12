#ifndef _PYCGLES2_GL_OES_COMPRESSED_PALETTED_TEXTURE_H_
#define _PYCGLES2_GL_OES_COMPRESSED_PALETTED_TEXTURE_H_
#ifdef GL_OES_compressed_paletted_texture
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_OES_compressed_paletted_texture(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PALETTE4_RGB8_OES", GL_PALETTE4_RGB8_OES},
        {"GL_PALETTE4_RGBA8_OES", GL_PALETTE4_RGBA8_OES},
        {"GL_PALETTE4_R5_G6_B5_OES", GL_PALETTE4_R5_G6_B5_OES},
        {"GL_PALETTE4_RGBA4_OES", GL_PALETTE4_RGBA4_OES},
        {"GL_PALETTE4_RGB5_A1_OES", GL_PALETTE4_RGB5_A1_OES},
        {"GL_PALETTE8_RGB8_OES", GL_PALETTE8_RGB8_OES},
        {"GL_PALETTE8_RGBA8_OES", GL_PALETTE8_RGBA8_OES},
        {"GL_PALETTE8_R5_G6_B5_OES", GL_PALETTE8_R5_G6_B5_OES},
        {"GL_PALETTE8_RGBA4_OES", GL_PALETTE8_RGBA4_OES},
        {"GL_PALETTE8_RGB5_A1_OES", GL_PALETTE8_RGB5_A1_OES},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_OES_compressed_paletted_texture */
#endif /* _PYCGLES2_GL_OES_COMPRESSED_PALETTED_TEXTURE_H_ */

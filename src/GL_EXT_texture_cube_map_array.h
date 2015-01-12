#ifndef _PYCGLES2_GL_EXT_TEXTURE_CUBE_MAP_ARRAY_H_
#define _PYCGLES2_GL_EXT_TEXTURE_CUBE_MAP_ARRAY_H_
#ifdef GL_EXT_texture_cube_map_array
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_EXT_texture_cube_map_array(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_TEXTURE_CUBE_MAP_ARRAY_EXT", GL_TEXTURE_CUBE_MAP_ARRAY_EXT},
        {"GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT", GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT},
        {"GL_SAMPLER_CUBE_MAP_ARRAY_EXT", GL_SAMPLER_CUBE_MAP_ARRAY_EXT},
        {"GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT", GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT},
        {"GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT", GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT},
        {"GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT", GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT},
        {"GL_IMAGE_CUBE_MAP_ARRAY_EXT", GL_IMAGE_CUBE_MAP_ARRAY_EXT},
        {"GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT", GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT},
        {"GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT", GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_texture_cube_map_array */
#endif /* _PYCGLES2_GL_EXT_TEXTURE_CUBE_MAP_ARRAY_H_ */

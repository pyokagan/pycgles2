#ifndef _PYCGLES2_GL_APPLE_CLIP_DISTANCE_H_
#define _PYCGLES2_GL_APPLE_CLIP_DISTANCE_H_
#ifdef GL_APPLE_clip_distance
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


static int
PyCGLES2_GL_APPLE_clip_distance(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_MAX_CLIP_DISTANCES_APPLE", GL_MAX_CLIP_DISTANCES_APPLE},
        {"GL_CLIP_DISTANCE0_APPLE", GL_CLIP_DISTANCE0_APPLE},
        {"GL_CLIP_DISTANCE1_APPLE", GL_CLIP_DISTANCE1_APPLE},
        {"GL_CLIP_DISTANCE2_APPLE", GL_CLIP_DISTANCE2_APPLE},
        {"GL_CLIP_DISTANCE3_APPLE", GL_CLIP_DISTANCE3_APPLE},
        {"GL_CLIP_DISTANCE4_APPLE", GL_CLIP_DISTANCE4_APPLE},
        {"GL_CLIP_DISTANCE5_APPLE", GL_CLIP_DISTANCE5_APPLE},
        {"GL_CLIP_DISTANCE6_APPLE", GL_CLIP_DISTANCE6_APPLE},
        {"GL_CLIP_DISTANCE7_APPLE", GL_CLIP_DISTANCE7_APPLE},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_APPLE_clip_distance */
#endif /* _PYCGLES2_GL_APPLE_CLIP_DISTANCE_H_ */

#ifndef _PYCGLES2_GL_EXT_TESSELLATION_SHADER_H_
#define _PYCGLES2_GL_EXT_TESSELLATION_SHADER_H_
#ifdef GL_EXT_tessellation_shader
#include <Python.h>
#include <pycgles2.h>
#include "gl.h"
#include "util.h"
#include "ctxstruct.h"


/* TODO(NotImplemented): glPatchParameteriEXT */
static PyObject *
PyCGLES2_glPatchParameteriEXT(PyCGLES2_Context *self, PyObject *args, PyObject *kwds)
{
    /* void glPatchParameteriEXT (GLenum pname, GLint value) */
    PyErr_SetString(PyExc_NotImplementedError, "glPatchParameteriEXT");
    return NULL;
}


static int
PyCGLES2_GL_EXT_tessellation_shader(PyObject *m)
{
    static const PyCGLES2_Enum enums[] = {
        {"GL_PATCHES_EXT", GL_PATCHES_EXT},
        {"GL_PATCH_VERTICES_EXT", GL_PATCH_VERTICES_EXT},
        {"GL_TESS_CONTROL_OUTPUT_VERTICES_EXT", GL_TESS_CONTROL_OUTPUT_VERTICES_EXT},
        {"GL_TESS_GEN_MODE_EXT", GL_TESS_GEN_MODE_EXT},
        {"GL_TESS_GEN_SPACING_EXT", GL_TESS_GEN_SPACING_EXT},
        {"GL_TESS_GEN_VERTEX_ORDER_EXT", GL_TESS_GEN_VERTEX_ORDER_EXT},
        {"GL_TESS_GEN_POINT_MODE_EXT", GL_TESS_GEN_POINT_MODE_EXT},
        {"GL_ISOLINES_EXT", GL_ISOLINES_EXT},
        {"GL_QUADS_EXT", GL_QUADS_EXT},
        {"GL_FRACTIONAL_ODD_EXT", GL_FRACTIONAL_ODD_EXT},
        {"GL_FRACTIONAL_EVEN_EXT", GL_FRACTIONAL_EVEN_EXT},
        {"GL_MAX_PATCH_VERTICES_EXT", GL_MAX_PATCH_VERTICES_EXT},
        {"GL_MAX_TESS_GEN_LEVEL_EXT", GL_MAX_TESS_GEN_LEVEL_EXT},
        {"GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT", GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT},
        {"GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT", GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT},
        {"GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT", GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT},
        {"GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT", GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT},
        {"GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT", GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT},
        {"GL_MAX_TESS_PATCH_COMPONENTS_EXT", GL_MAX_TESS_PATCH_COMPONENTS_EXT},
        {"GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT", GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT},
        {"GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT", GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT},
        {"GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT", GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT},
        {"GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT", GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT},
        {"GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT", GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT},
        {"GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT", GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT},
        {"GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT", GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT},
        {"GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT", GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT},
        {"GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT", GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT},
        {"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT", GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT},
        {"GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT", GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT},
        {"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT", GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT},
        {"GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT", GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT},
        {"GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT", GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT},
        {"GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT", GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT},
        {"GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT", GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT},
        {"GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED", GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED},
        {"GL_IS_PER_PATCH_EXT", GL_IS_PER_PATCH_EXT},
        {"GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT", GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT},
        {"GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT", GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT},
        {"GL_TESS_CONTROL_SHADER_EXT", GL_TESS_CONTROL_SHADER_EXT},
        {"GL_TESS_EVALUATION_SHADER_EXT", GL_TESS_EVALUATION_SHADER_EXT},
        {"GL_TESS_CONTROL_SHADER_BIT_EXT", GL_TESS_CONTROL_SHADER_BIT_EXT},
        {"GL_TESS_EVALUATION_SHADER_BIT_EXT", GL_TESS_EVALUATION_SHADER_BIT_EXT},
        {NULL, 0}
    };
    const PyCGLES2_Enum *e;
    for (e = enums; e->name != NULL; ++e)
        if (PyModule_AddIntConstant(m, e->name, e->value) != 0)
            return 0;
    return 1;
}


#endif /* GL_EXT_tessellation_shader */
#endif /* _PYCGLES2_GL_EXT_TESSELLATION_SHADER_H_ */

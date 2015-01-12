#include <pycgles2.h> /* Public interface header */
#include "gl.h"
#include "ctxstruct.h" /* PyCGLES2_Context struct definition */
#include "ctxinit.h" /* PyCGLES2_ContextInit definition */
#include "ctxmembers.h" /* PyCGLES2_ContextMembers definition */
#include "ctxmethods.h" /* PyCGLES2_ContextMethods definition */


static PyObject *
PyCGLES2_ContextNew(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    PyCGLES2_Context *self;
    if (!(self = (PyCGLES2_Context*)type->tp_alloc(type, 0)))
        return NULL;
    self->in_weakreflist = NULL;
    return (PyObject*) self;
}


static void
PyCGLES2_ContextDealloc(PyCGLES2_Context *self)
{
    if (self->in_weakreflist != NULL)
        PyObject_ClearWeakRefs((PyObject*) self);
    Py_XDECREF(self->make_current);
    Py_XDECREF(self->get_proc_address);
    Py_TYPE(self)->tp_free((PyObject*) self);
}


static PyTypeObject PyCGLES2_ContextType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    /* tp_name           */ "cgles2.Context",
    /* tp_basicsize      */ sizeof(PyGLES2_Context),
    /* tp_itemsize       */ 0,
    /* tp_dealloc        */ (destructor) PyCGLES2_ContextDealloc,
    /* tp_print          */ 0,
    /* tp_getattr        */ 0,
    /* tp_setattr        */ 0,
    /* tp_reserved       */ 0,
    /* tp_repr           */ 0,
    /* tp_as_number      */ 0,
    /* tp_as_sequence    */ 0,
    /* tp_as_mapping     */ 0,
    /* tp_hash           */ 0,
    /* tp_call           */ 0,
    /* tp_str            */ 0,
    /* tp_getattro       */ 0,
    /* tp_setattro       */ 0,
    /* tp_as_buffer      */ 0,
    /* tp_flags          */ Py_TPFLAGS_DEFAULT,
    /* tp_doc            */ "GLES2 Context",
    /* tp_traverse       */ 0,
    /* tp_clear          */ 0,
    /* tp_richcompare    */ 0,
    /* tp_weaklistoffset */ offsetof(PyGLES2_Context, in_weakreflist),
    /* tp_iter           */ 0,
    /* tp_iternext       */ 0,
    /* tp_methods        */ PyCGLES2_ContextMethods,
    /* tp_members        */ PyCGLES2_ContextMembers,
    /* tp_getset         */ 0,
    /* tp_base           */ 0,
    /* tp_dict           */ 0,
    /* tp_descr_get      */ 0,
    /* tp_descr_set      */ 0,
    /* tp_dictoffset     */ 0,
    /* tp_init           */ PyCGLES2_ContextInit,
    /* tp_alloc          */ 0,
    /* tp_new            */ PyCGLES2_ContextNew,
};


static PyModuleDef PyCGLES2_Module = {
    PyModuleDef_HEAD_INIT,
    /* m_name */ "cgles2",
    /* m_doc */ "GLES2",
    /* m_size */ -1,
    /* m_methods */ NULL,
    /* m_reload */ NULL,
    /* m_traverse */ NULL,
    /* m_clear */ NULL,
    /* m_free */ NULL
};


PyMODINIT_FUNC
PyInit_cgles2(void)
{
    PyObject *m = PyModule_Create(&PyCGLES2_Module);

#include "initmodules.h"

    if (PyType_Ready(&PyCGLES2_ContextType) < 0) goto cleanup_module;
    Py_INCREF(&PyCGLES2_ContextType);
    if (PyModule_AddObject(m, "Context", (PyObject*) &PyCGLES2_ContextType) != 0)
        goto cleanup_module;

    return m;
cleanup_module:
    Py_XDECREF(m);
    return NULL;
}

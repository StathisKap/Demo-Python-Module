#include "/opt/homebrew/Cellar/python@3.11/3.11.4/Frameworks/Python.framework/Versions/3.11/include/python3.11/Python.h"

static PyObject* stathis_say_hello(PyObject* self, PyObject* args) {
    printf("Hello, world!\n");
    Py_RETURN_NONE;
}
char stathis_say_hello_docs[] = "My first Python method written in C. It just says Hello. - Stathis";

static PyMethodDef stathis_methods[] = {
    {"say_hello", (PyCFunction)stathis_say_hello, METH_NOARGS, stathis_say_hello_docs},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef stathis_module = {
    PyModuleDef_HEAD_INIT,
    "stathis",
    NULL,
    -1,
    stathis_methods
};

PyMODINIT_FUNC PyInit_stathis(void) {
    return PyModule_Create(&stathis_module);
}
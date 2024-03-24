#include <pybind11/pybind11.h>
#include "hpx/include/libs/core/algorithms/parallel/algorithms/for_loop.hpp"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)
namespace py = pybind11;

PYBIND11_MODULE(for_loop_binder, m) {
    m.doc() = R"pbdoc(
        Pybind11 hpx plugin
        -----------------------

        .. currentmodule:: hpx

        .. autosummary::
           :toctree: _generate

           for_loop
    )pbdoc";

    m.def("for_lopp", &for_loop<int>, py::arg("first"), py::arg("last"), py::args(), R"pbdoc(
        hpx for loop
    )pbdoc");

    m.attr("__version__") = "0.0.1";
}
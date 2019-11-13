#include "pybind11/pybind11.h"

#include "xtensor/xmath.hpp"
#include "xtensor/xarray.hpp"

#define FORCE_IMPORT_ARRAY
#include "xtensor-python/pyarray.hpp"
#include "xtensor-python/pyvectorize.hpp"

#include <iostream>
#include <numeric>
#include <string>
#include <sstream>


// our headers
#include "crank/crank.hpp"
#include "crank/crank_config.hpp"

namespace py = pybind11;



namespace crank {


    // implementation in def_myclass.cpp
    void def_class(py::module & m);

    // implementation in def_myclass.cpp
    void def_build_config(py::module & m);

    // implementation in def.cpp
    void def_build_config(py::module & m);

}


// Python Module and Docstrings
PYBIND11_MODULE(_crank , module)
{
    xt::import_numpy();

    module.doc() = R"pbdoc(
        _crank  python bindings

        .. currentmodule:: _crank 

        .. autosummary::
           :toctree: _generate

           BuildConfiguration
           MyClass
    )pbdoc";

    crank::def_build_config(module);
    crank::def_class(module);

    // make version string
    std::stringstream ss;
    ss<<CRANK_VERSION_MAJOR<<"."
      <<CRANK_VERSION_MINOR<<"."
      <<CRANK_VERSION_PATCH;
    module.attr("__version__") = ss.str().c_str();
}
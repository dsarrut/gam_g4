/* --------------------------------------------------
   Copyright (C): OpenGATE Collaboration
   This software is distributed under the terms
   of the GNU Lesser General  Public Licence (LGPL)
   See LICENSE.md for further details
   -------------------------------------------------- */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include "GamEventAction.h"
#include "G4UserEventAction.hh"

void init_GamEventAction(py::module &m) {

    py::class_<GamEventAction, G4UserEventAction>(m, "GamEventAction")
        .def(py::init())
        .def("RegisterActor", &GamEventAction::RegisterActor);
}

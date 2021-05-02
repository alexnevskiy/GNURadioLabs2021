/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(glfsr_source_b.h)                                          */
/* BINDTOOL_HEADER_FILE_HASH(d5e395b769198beb82a644f02b11f443)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/glfsr_source_b.h>
// pydoc.h is automatically generated in the build directory
#include <glfsr_source_b_pydoc.h>

void bind_glfsr_source_b(py::module& m)
{

    using glfsr_source_b = ::gr::digital::glfsr_source_b;


    py::class_<glfsr_source_b,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<glfsr_source_b>>(m, "glfsr_source_b", D(glfsr_source_b))

        .def(py::init(&glfsr_source_b::make),
             py::arg("degree"),
             py::arg("repeat") = true,
             py::arg("mask") = 0,
             py::arg("seed") = 1,
             D(glfsr_source_b, make))


        .def("period", &glfsr_source_b::period, D(glfsr_source_b, period))


        .def("mask", &glfsr_source_b::mask, D(glfsr_source_b, mask))

        ;
}

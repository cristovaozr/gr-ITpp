/*
 * Copyright 2023 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(BSC_Byte.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(10c4bcabed239087a82231dfcb910782)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/ITpp/BSC_Byte.h>
// pydoc.h is automatically generated in the build directory
#include <BSC_Byte_pydoc.h>

void bind_BSC_Byte(py::module& m)
{

    using BSC_Byte    = gr::ITpp::BSC_Byte;


    py::class_<BSC_Byte, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<BSC_Byte>>(m, "BSC_Byte", D(BSC_Byte))

        .def(py::init(&BSC_Byte::make),
           D(BSC_Byte,make)
        )
        



        ;




}









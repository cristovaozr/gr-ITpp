/* -*- c++ -*- */
/*
 * Copyright 2023 gr-ITpp author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "BCH_Decoder_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace ITpp {

#pragma message("set the following appropriately and remove this warning")
using input_type = float;
#pragma message("set the following appropriately and remove this warning")
using output_type = float;
BCH_Decoder::sptr BCH_Decoder::make(int n, int t) {
  return gnuradio::make_block_sptr<BCH_Decoder_impl>(n, t);
}

/*
 * The private constructor
 */
BCH_Decoder_impl::BCH_Decoder_impl(int n, int t)
    : gr::sync_block(
          "BCH_Decoder",
          gr::io_signature::make(1, 1, sizeof(input_type)),
          gr::io_signature::make(1, 1, sizeof(output_type))),
          bloco(n, t)
{
    d_N = n;
    d_T = t;
    d_K = bloco.get_k();
    encoded.set_length(d_N);
    set_output_multiple(d_K);
}

/*
 * Our virtual destructor.
 */
BCH_Decoder_impl::~BCH_Decoder_impl() {}

int BCH_Decoder_impl::work(int noutput_items,
                           gr_vector_const_void_star &input_items,
                           gr_vector_void_star &output_items) {
  auto in = static_cast<const input_type *>(input_items[0]);
  auto out = static_cast<output_type *>(output_items[0]);

#pragma message(                                                               \
    "Implement the signal processing in your block and remove this warning")
  // Do <+signal processing+>

  // Tell runtime system how many output items we produced.
  return noutput_items;
}

} /* namespace ITpp */
} /* namespace gr */

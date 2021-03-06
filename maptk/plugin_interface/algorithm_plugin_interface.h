/*ckwg +29
 * Copyright 2014 by Kitware, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither name of Kitware, Inc. nor the names of any contributors may be used
 *    to endorse or promote products derived from this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * \file
 * \brief Public interface for plugin library generation
 */

#ifndef MAPTK_PLUGIN_INTERFACE_ALGORITHM_IMPL_PL_INTERFACE_H_
#define MAPTK_PLUGIN_INTERFACE_ALGORITHM_IMPL_PL_INTERFACE_H_

#include <maptk/registrar.h>


// This macro should be defined to the implementing library's export symbol
#ifndef MAPTK_ALGO_REGISTER_EXPORT
# define MAPTK_ALGO_REGISTER_EXPORT
#endif


/// Algorithm implementation registration interface function
/**
 * Implementations of this method within a plugin should include a
 * ``.register_self()`` call for each algorithm implementation to be made
 * available.
 *
 * Exceptions may be thrown in this method, but will be eaten in the C
 * interface, causing a generic registration error with a error log message.
 *
 * \returns The number of implementations that FAILED to register, i.e. a
 *          return of 0 means registration success.
 */
MAPTK_ALGO_REGISTER_EXPORT
int register_algo_impls( maptk::registrar &reg = maptk::registrar::instance() );


#endif // MAPTK_PLUGIN_INTERFACE_ALGORITHM_IMPL_PL_INTERFACE_H_

//===-- asan_preinit.cc ---------------------------------------------------===//
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is a part of AddressSanitizer, an address sanity checker.
//
// Call __asan_init at the very early stage of process startup.
//===----------------------------------------------------------------------===//
#include "asan_internal.h"

#if SANITIZER_CAN_USE_PREINIT_ARRAY
  // The symbol is called __local_asan_preinit, because it's not intended to be
  // exported.
  __attribute__((section(".preinit_array"), used))
  void (*__local_asan_preinit)(void) = __asan_init;
#endif

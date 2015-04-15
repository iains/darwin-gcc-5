/* Test the `vreinterpretQu8_s8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretQu8_s8 (void)
{
  uint8x16_t out_uint8x16_t;
  int8x16_t arg0_int8x16_t;

  out_uint8x16_t = vreinterpretq_u8_s8 (arg0_int8x16_t);
}

/* { dg-final { cleanup-saved-temps } } */

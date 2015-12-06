/* Test __attribute__((unavailable)).  Test types without names.  */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

struct { int a; } __attribute__((unavailable)) x; /* { dg-error "type is unavailable" } */
typeof(x) y; /* { dg-error "type is unavailable" } */

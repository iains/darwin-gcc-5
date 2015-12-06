/* Test __attribute__ ((unavailable)) */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

struct Foo { int i; } __attribute__ ((unavailable));
void foo() { Foo f; }		// { dg-error "unavailable" }

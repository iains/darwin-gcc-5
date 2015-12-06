/* Test __attribute__((unavailable)). */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

void func(void);
void func(void) __attribute__((unavailable));

void f(void) {
  func(); /* { dg-error "'func' is unavailable" } */
}

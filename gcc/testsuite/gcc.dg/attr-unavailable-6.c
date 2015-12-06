/* Test __attribute__((unavailable)).  Test merging with multiple
   declarations. */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

void func(void);
void func(void) __attribute__((unavailable ("Do not use")));

void f(void) {
  func(); /* { dg-error "'func' is unavailable: Do not use" } */
}

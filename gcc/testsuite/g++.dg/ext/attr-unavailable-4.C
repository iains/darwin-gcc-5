/* Test __attribute__ ((unavailable)) */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

struct B {
    virtual int foo() __attribute__((unavailable));
};

int main(void) {
  ((B*)0)->foo(); 		// { dg-error "unavailable" }
}

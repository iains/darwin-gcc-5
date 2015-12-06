/* Check operator with __attribute__((unavailable)) */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

struct Foo
{
  operator int() __attribute__((unavailable));
};

void g(void)
{
  Foo f;
  (int)f; // { dg-error "'Foo::operator int\\(\\)' is unavailable" }
}

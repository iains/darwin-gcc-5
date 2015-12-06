/* Test __attribute__ ((unavailable)) */
/* Added by Iain Sandoe <iain@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "" } */

template<typename T> struct __attribute__ ((unavailable)) S {};
S<int> s;

template <template <class> class T> struct A { };
A<S> a;

template <class T> void f() __attribute__ ((unavailable));

int main()
{
  f<int>();			// { dg-error "unavailable" }
  void (*p)() = f<char>;	// { dg-error "unavailable" }
}

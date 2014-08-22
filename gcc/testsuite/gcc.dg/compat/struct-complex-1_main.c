/* { dg-options "-O"   { target { i?86-*-* x86_64-*-* } } } */

#ifdef __x86_64__
/* Test function argument passing.  PR target/15302.  */

extern void struct_complex_1_x (void);
extern void exit (int);

int
main ()
{
  struct_complex_1_x ();
  exit (0);
}
#else
int
main ()
{
  return 0;
}
#endif

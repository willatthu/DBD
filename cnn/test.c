#include <stdio.h>
#include <cblas.h>
 
int
main ()
{
  int i, j, n, one;
  double coefficient;
  double x[] = { 1, 1, 1 };
 
  coefficient = 4.323;
  one = 1;
  n = 3;
 
  //dscal_(&n, &coefficient, &x[0], &one);
  cblas_dscal(3, 4.323, x, 1);
 
  for (i = 0; i < 3; ++i)
    printf ("%f\n", x[i]);
 
  return 0;
}

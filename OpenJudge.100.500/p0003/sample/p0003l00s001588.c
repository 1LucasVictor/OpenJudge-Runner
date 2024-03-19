#include <stdio.h>
int
main (void)
{
  double a, b, c, d, e, f;
  while (scanf ("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF)
    {
      printf ("%.3f %.3f\n", (c * e - f * b) / (a * e - b * d),
	      -(c * d - f * a) / (a * e - b * d));
    }
  return 0;
}
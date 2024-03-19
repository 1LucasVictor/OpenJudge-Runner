#include <stdio.h>
/*
  連立方程式を解く
*/
int main(void)
{
  double a, b, c, d, e, f;
  double x, y;

  while (
  scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f)
  != EOF) {

  y = (c * d - a * f) / (b * d - a * e);
  x = (f - e * y) / d;

  if (x == -0.000) x = 0.000;
  if (y == -0.000) y = 0.000;

  printf("%.3f %.3f\n", x, y);
  }
  return(0);
}
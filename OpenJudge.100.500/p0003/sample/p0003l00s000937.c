#include <stdio.h>

int main()
{
  double a, b, c, d, e, f, x, y;
  while (EOF != scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f))
  {
    y = (c - (a * f) / d) / (b - (a * e) / d);
    x = (c - (b * y)) / a;
    printf("%.3lf %.3lf\n", x, y);
  }

  return 0;
}
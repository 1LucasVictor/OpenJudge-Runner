#include <stdio.h>

void calcSimulataneousEquation(double a, double b, double c, double d, double e, double f, double *x, double *y) {
  *x = (c * e - f * b) / (a * e - d * b) + 0.0;
  *y = (a * f - d * c) / (a * e - d * b) + 0.0;
}

double main(void) {
  double a, b, c, d, e, f;
  double x, y;

  while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
    calcSimulataneousEquation(a, b, c, d, e, f, &x, &y);
    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}
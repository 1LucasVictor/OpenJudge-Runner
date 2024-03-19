#include <stdio.h>

struct equation {
  double a, b, c, d, e, f;
  double x, y;
};

int main(void) 
{
  struct equation E;

  while (scanf("%lf %lf %lf %lf %lf %lf", &E.a, &E.b, &E.c, &E.d, &E.e, &E.f) != EOF) {

    E.x = (E.c - E.b * E.f / E.e) / (E.a - E.b * E.d / E.e);
    E.y = (E.c - E.a * E.x) / E.b;

    printf("%.3f %.3f\n", E.x, E.y);
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int a, b, c, d, e, f;
  double x, y;

  while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
    x = (b * f - c * e) / (double)(b * d - a * e);
    y = c / (double)b - (a / (double)b) * x;

    if (x == -0) x = 0;
    if (y == -0) y = 0;

    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}
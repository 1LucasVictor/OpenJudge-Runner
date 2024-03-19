#include <stdio.h>

int main() {
  double a, b, c, d, e, f;
  double x, y;
  while (scanf("%lf", &a) != EOF) {
    scanf("%lf %lf %lf %lf %lf", &b, &c, &d, &e, &f);
    b *= d / a;
    c *= d / a;
    a = d;
    if ((a > 0 && d > 0) || (a < 0 && d < 0)) {
      a *= -1;
      b *= -1;
      c *= -1;
    }
    e += b;
    f += c;
    y = f / e;
    x = (-1 * b * y + c) / a;
    if (x == -0)
      x = 0;
    else if (y == -0)
      y = 0;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}
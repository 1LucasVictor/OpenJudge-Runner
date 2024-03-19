#include <stdio.h>

int main() {
  int a, b, c, d, e, f;
  int x, y, det;
  while (scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF) {
    det = a * e - b * d;
    x = 1000 * (c * e - b * f) / det;
    y = 1000 * (a * f - c * d) / det;
    printf("%d.%03d %d.%03d\n", x / 1000, x % 1000, y / 1000, y % 1000);
  }
  return 0;
}
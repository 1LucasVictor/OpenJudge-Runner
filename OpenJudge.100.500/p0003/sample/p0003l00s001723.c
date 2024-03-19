#include <stdio.h>

int main() {
  int a, b, c, d, e, f;
  while (scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF) {
    double det = a * e - b * d;
    int x = 1000 * (c * e - b * f) / det;
    int y = 1000 * (a * f - c * d) / det;
    printf("%d.%03d %d.%03d\n", x / 1000, x % 1000, y / 1000, y % 1000);
  }
  return 0;
}
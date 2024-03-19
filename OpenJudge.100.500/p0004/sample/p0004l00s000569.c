#include <stdio.h>

int main(void) {
  unsigned int a, b, tmp;
  unsigned int gcd, lcm;

  while (scanf("%d %d", &a, &b) != EOF) {
    gcd = a; lcm = b;
    if (a < b) { tmp = a; a = b; b = tmp; }
    while (b != 0) {
      tmp = b;
      b = gcd % b;
      gcd = tmp;
    }
    lcm = lcm / gcd * a;

    printf("%d %d\n", gcd, lcm);
  }

  return 0;
}
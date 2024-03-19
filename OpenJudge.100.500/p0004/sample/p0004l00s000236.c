#include <stdio.h>

int main(void) {
  unsigned int a, b, tmp;
  unsigned int gcd, lcm;

  while (scanf("%d %d", &a, &b) != EOF) {
    if (a < b) { tmp = a; a = b; b = tmp; }
    gcd = a; lcm = b;
    while (b != 0) {
      tmp = b;
      b = gcd % b;
      gcd = tmp;
    }
    lcm = a / gcd * lcm;

    printf("%d %d\n", gcd, lcm);
  }

  return 0;
}
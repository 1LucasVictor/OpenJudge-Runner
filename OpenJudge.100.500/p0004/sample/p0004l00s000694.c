#include <stdio.h>

long int mkgcd(long int x, long int y) {
  if (x % y == 0)
    return y;
  else
    return mkgcd(y, x % y);
}

int main(void) {
  long int a, b, t, gcd, lcm;

  while (scanf("%ld %ld", &a, &b) != EOF) {
    if (a < b) {
      t = a;
      a = b;
      b = t;
    }

    gcd = mkgcd(a, b);
    lcm = a * b / gcd;

    printf("%ld %ld\n", gcd, lcm);
  }

  return 0;
}
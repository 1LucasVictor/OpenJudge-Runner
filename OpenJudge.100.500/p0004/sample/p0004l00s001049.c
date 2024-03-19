#include <stdio.h>

long int mkgcd(long int x, long int y) {
  int i, max = 1;
  for (i = 2; i <= x && i <= y; i++)
    if (x % i == 0 && y % i == 0)
      max = i;

  return max;
}

int main(void) {
  long int a, b, gcd, lcm;

  while (scanf("%ld %ld", &a, &b) != EOF) {
    gcd = mkgcd(a, b);
    lcm = a * b / gcd;

    printf("%ld %ld\n", gcd, lcm);
  }

  return 0;
}
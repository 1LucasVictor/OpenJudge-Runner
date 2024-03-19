#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main(void)
{
  int a, b;

  while (~scanf("%d%d", &a, &b)) {
    int g = gcd(a, b);
    printf("%d %d\n", g, a / g * b);
  }

  return (0);
}
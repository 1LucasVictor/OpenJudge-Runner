#include <stdio.h>

long gcd(long a, long b)
{
  long tmp;

  while (b) {
    tmp = b;
    b = a % b;
    a = tmp;
  }

  return a;
}

long lcm(long a, long b)
{
  return a / gcd(a, b) * b;
}

int main(void)
{
  long a, b;

  while (~scanf("%ld %ld", &a, &b)) {
    printf("%ld %ld\n", gcd(a, b), lcm(a, b));
  }

  return 0;
}
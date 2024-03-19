#include <stdio.h>

long int gcd(long int x, long int y)
{
  long int t;

  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}

int main (int argc, char* argv[])
{
  long int a, b;
  while (scanf("%ld %ld", &a, &b) != EOF) {
    printf("%ld %ld\n", gcd(a, b), a*b/gcd(a, b));
  }
  return 0;
}
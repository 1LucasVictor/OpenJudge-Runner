#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
  int a, b;
  scanf(" %d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  return 0;
}

// gcd finds the GCD of a and b.
int gcd(int a, int b)
{
  int i;
  if (b > a)
    {
      i = a;
      a = b;
      b = i;
    }
  while (a % b != 0)
    {
      i = a % b;
      a = b;
      b = i;
    }
  return b;
}


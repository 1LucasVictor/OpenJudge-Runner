#include <stdio.h>

int main(void)
{
  int n, div, mod;
  scanf("%d", &n);
  div = n / 2;
  mod = n % 2;
  printf("%d", div + mod);
  return 0;
}
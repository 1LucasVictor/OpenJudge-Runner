#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", b % a ? b - a : b + a);
  return 0;
}
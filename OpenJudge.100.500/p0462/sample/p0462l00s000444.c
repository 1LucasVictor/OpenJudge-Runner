#include <stdio.h>

int main(void)
{
  long long int a;
  double b;
  scanf("%lld %lf", &a, &b);
  printf("%lld\n", (long long int)(a*b));
  return 0;
}

#include <stdio.h>

int main(void)
{
  double a;
  double b;
  long long int x;
  scanf("%lf %lf",&a,&b);
  x = (long long)(a * b);
  printf("%lld\n",x);
  return 0;
}


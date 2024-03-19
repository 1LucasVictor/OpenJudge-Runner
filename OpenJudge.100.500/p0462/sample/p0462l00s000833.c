#include <stdio.h>

int main(void)
{
  long long a, r;
  double b;
  
  scanf("%lld", &a);
  scanf("%lf", &b);
  
  r = (long long)(b * 100);
  
  r *= a;
  
  r /= 100;
  
  printf("%lld", r);
  
  return 0;
}
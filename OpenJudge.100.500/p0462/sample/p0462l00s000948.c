#include <stdio.h>

int main(void)
{
  long long a;
  double b;
  
  scanf("%lld %lf",&a,&b);
  
  printf("%lld\n",(long)(a*b));
  
  return 0;
}
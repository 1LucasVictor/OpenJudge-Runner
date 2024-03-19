#include<stdio.h>
int main(void)
{
  long long a;
  double b;

  scanf("%lld %lf",&a,&b);

  printf("%lld\n",(long long)(a*(b*100))/100);
  return 0;
}

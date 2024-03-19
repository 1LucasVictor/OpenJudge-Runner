#include<stdio.h>
int main()
{
  long long a;
  double b;
  scanf("%lld %lf",&a,&b);
  long long m = (double)(a*b);
  printf("%lld",m);
}

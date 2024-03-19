#include<stdio.h>
int main()
{
  long long a;
  float b;
  scanf("%lld %f",&a,&b);
  long long m = (float)(a*b);
  printf("%lld",m);
}
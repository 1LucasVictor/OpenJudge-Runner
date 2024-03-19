#include<stdio.h>
int main()
{
  long x,a,i,max=0;
  scanf("%ld",&x);
  a=x/500;
  max=x-500*a;
  max/=5;
  printf("%ld",a*1000+max*5);
  return 0;
}

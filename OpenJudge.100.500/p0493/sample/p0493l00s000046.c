#include<stdio.h>

int main()
{
  int a,b;
  scanf("%lld",&a);
  b=(a/500)*1000+((a%500)/5)*5;
  printf("%lld\n",b);
    return 0;
}

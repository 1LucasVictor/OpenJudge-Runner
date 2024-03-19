#include<stdio.h>

int main(void)
{
  long long min=5000000000;
  long long l,r;
  scanf("%lld %lld",&l,&r);
  printf("%lld\n",(l%2019)*((l%2019)+1));
  return 0;
}

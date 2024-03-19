#include<stdio.h>

int main()
{
 long long int h,a,ans = 0;
 scanf("%lld %lld",&h,&a);
 ans = h/a;
  if(h%2 == 0 )
    ans += 1;
  printf("%lld",ans);
  return 0;
}
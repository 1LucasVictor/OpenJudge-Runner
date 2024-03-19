#include<stdio.h>
int main()
{
  long long int n,m,r,t=0;
 scanf("%lld %lld",&n,&m);
 while(n>0)
 {
     n = n - m;
     t++;
 }

 printf("%d",t);
  return 0;
}

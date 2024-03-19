#include<stdio.h>
int main()
{
  long long int n,k;
  scanf("%lld %lld",&n,&k);
  while(1)
  {
    if(abs(n-k)<n)
    n=abs(n-k);
    if(abs(n-k)>n)
      break;
  }
  printf("%lld",n);
}
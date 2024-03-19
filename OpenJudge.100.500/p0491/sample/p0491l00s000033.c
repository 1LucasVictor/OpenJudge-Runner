#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int n,k;
  scanf("%lld %lld",&n,&k);
  n=n%k;
  if(n>abs(n-k))
    n=labs(n-k);
  printf("%lld",n);

}

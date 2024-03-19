#include <stdio.h>
int main(void)
{
  long long int n,k;
  int m;
  scanf("%lld",&n);
  scanf("%lld",&k);
  n=n%k;
  m=n-k;
  if(m<0)
    m=-m;
  if(m<=n)
    printf("%lld",m);
  else
    printf("%lld",n);
  
  return 0;
}
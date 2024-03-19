#include <stdio.h>
int main(void)
{
  long n,k;
  int m;
  scanf("%d",&n);
  scanf("%d",&k);
  n=n%k;
  m=n-k;
  if(m<0)
    m=-m;
  if(m<=n)
    printf("%d",m);
  else
    printf("%d",n);
  
  return 0;
}
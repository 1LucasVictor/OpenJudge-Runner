#include <stdio.h>
int main(void)
{
  int n,k,m;
  scanf("%d",&n);
  scanf("%d",&k);
  n=n%k;
  m=k-n;
  if(m<n)
    n=m;
  printf("%d",n);
  
  return 0;
}
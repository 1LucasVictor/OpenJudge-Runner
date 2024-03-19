#include <stdio.h>
int main(void)
{
  int n,k,t,a,min; 
  scanf("%d",&n);
  scanf("%d",&k);
  t=n%k;
  a=t-k;
  if(a<0)
    a=a*-1;
  if(t<a)
    min=t;
  else
    min=a;
  printf("%d",min);
}
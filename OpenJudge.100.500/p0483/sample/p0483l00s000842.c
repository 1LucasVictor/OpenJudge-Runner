#include <stdio.h>

int main (void)
{
  int n,i;
  int flag;
  
  scanf("%d",&n);
  
if(n%10==7)
  flag=1;
  
  n/=10;
if(n%10==7)
  flag=1;
  
  n/=10;
  
  if(n%10==7)
  flag=1;
  
  if(flag==1)
    printf("Yes");
  else
    printf("No");
  
  return 0;
}
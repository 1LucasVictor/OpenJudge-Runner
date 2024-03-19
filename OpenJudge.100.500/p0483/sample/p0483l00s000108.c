#include <stdio.h>
int main(void)
{
  int n,s=0;
  scanf("%d",&n);
  if((n%10)==7)
    s=1;
  n/=10;
  if((n%10)==7)
    s=1;
  n/=10;
  if(n==7)
    s=1;
  if(s==1)
    printf("Yes");
  else
    printf("No");
  
  return 0;
}
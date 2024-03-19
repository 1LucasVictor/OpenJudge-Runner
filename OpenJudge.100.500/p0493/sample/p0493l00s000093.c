#include <stdio.h>
int main(void)
{
  int x;
  int a,e,f;
  
  scanf("%d",&x);
  
  a=x/500;
  x-=a*500;  
  e=x/5;
  x-=e*5;
  f=x;
  
  printf("%d",a*1000+e*5);
  
  return 0;
}
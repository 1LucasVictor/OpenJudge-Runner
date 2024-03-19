#include<stdio.h>

int main(void)
{
  int x,s,t;
  
  scanf("%d",&x);
  
  s=x/500;
  x=x-500*s;
  
  t=x/5;
  x=x-5*t;
  
  printf("%d",1000*s+5*t);
  
  return 0;
}
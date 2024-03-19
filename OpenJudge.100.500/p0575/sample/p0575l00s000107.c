#include<stdio.h>
int main(void)
{
  int x;
  int a;
  int m;
  
  scanf("%d %d",&x,&a);
  
  if(x<a)
    m=0;
  else
    m=10;
  printf("%d",m);
  return 0;
}
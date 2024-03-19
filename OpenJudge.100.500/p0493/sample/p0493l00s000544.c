#include <stdio.h>

int main(void)
{
  int x,y,z,happy;
  scanf("%d",&x);
  
  y=x/500;
  z=(x-(500*y))/5;
  happy=y*1000+z*5;
  
  printf("%d",happy);
  
  return 0;
}
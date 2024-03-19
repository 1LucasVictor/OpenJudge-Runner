#include <stdio.h>
#include <math.h>
 
int main()
{
  int x, h=0;
  scanf("%d", &x);
  while(x>=5)
  {
      if(x>=500)
      {
      h=h+1000;
      x-=500;
      }
      h=h+5;
      x-=5;  
  }
  printf("%d", h);
  return 0;
}
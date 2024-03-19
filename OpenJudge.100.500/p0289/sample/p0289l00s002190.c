#include <stdio.h>


int main ()
{
  int x,y,a = 0;
  scanf("%d %d",&x,&y);
  if(x >= y)
    {
      while(1)
	{
	  a = x % y;
	  if(x % y == 0) break;
	  x = y;
	  y = a;
	}
      printf("%d",y);
    } else if(x <= y)
    {
      while(1)
	{
	  a = y % x;
	  if(y % x == 0) break;
	  y = x;
	  x = a;
	}
      printf("%d",x);
    
    } 
  printf("\n");
  return 0;
}


#include <stdio.h>

int main()
{
  int x, y, z;

  scanf("%d%d", &x, &y);
  if(x >= y)
    {
      x = x % y;
      for(z = y; z > 0; z--)
	{
	  if((x % z) == 0 && (y % z) == 0) break;
	}
    }
  else
    {
      y = y % x;
      for(z = x; z > 0; z--)
	{
	  if((x % z) == 0 && (y % z) == 0) break;
	}    
    }
  printf("%d\n", z);
}
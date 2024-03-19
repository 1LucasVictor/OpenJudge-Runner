#include <stdio.h>

int main()
{
  int x,y,r,z;

  scanf("%d%d",&x,&y);

  if(x<y)
    {
      z=x;
      x=y;
      y=z;
    }
  while(y>0)
    {
      r = x % y;
      x = y;
      y = r;
    }

  printf("%d",x);

  return 0;
}
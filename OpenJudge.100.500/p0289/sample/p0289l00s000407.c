#include <stdio.h>

int CommonDivisor(int,int);

int main()
{
  int x,y,d;
  scanf("%d %d",&x,&y);
  d = CommonDivisor(x,y);
  printf("%d\n",d);
}
int CommonDivisor(int x,int y)
{
  int n,r;
  if(x < y)
    {
      n = x; 
      x = y;
      y = n;
    }
  while(y > 0)
    {
      r = x % y;
      x = y;
      y = r;
    }
  return x;
}


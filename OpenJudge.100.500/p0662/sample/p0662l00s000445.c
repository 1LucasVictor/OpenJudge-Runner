#include<stdio.h>

int main(void)
{
  int a,b,c,d,ans,x,y;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a < c)
    {
      x = c;
    }
  else
    {
      x = a;
    }
  if(b < d)
    {
      y = b;
    }
  else
    {
      y = d;
    }
  ans = y - x;
  if(ans < 0)
    {
      ans = 0;
    }
  printf("%d\n",ans);
  return 0;
}

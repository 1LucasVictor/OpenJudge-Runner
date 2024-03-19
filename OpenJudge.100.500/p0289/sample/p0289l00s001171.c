#include<stdio.h>

int main()
{
  int x=0,y=0,i,ans=0,kari=0;

  scanf("%d%d",&x,&y);

  if( y > x )
  {
    kari = x;
    x = y;
    y = kari;
  }

  ans = x % y;

  while( ans != 0 )
  {
    x = y;
    y = ans;
    ans = x % y;
  }

  printf("%d\n",y);

  return 0;
}


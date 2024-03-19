#include<stdio.h>
int main(void)
{
  int x,y;
  int z=0;
  scanf("%d%d",&x,&y);
  if(x<y)
  {
    z=x;
    x=y;
    y=z;
  }

  int d=0;
  d=x%y;
  while(d!=0)
  {
    x=y;
    y=d;
    d=x%y;
  }
  printf("%d\n",y);
  return 0;
}


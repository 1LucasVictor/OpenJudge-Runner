#include <stdio.h>
int main()
{
  int W,H,x,y,r;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if(x<W && y<H && x+r<=W && y+r<=H && W>0 && H>0 && -100<=x&y<=100)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
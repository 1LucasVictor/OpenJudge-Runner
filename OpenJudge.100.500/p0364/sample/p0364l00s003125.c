#include<stdio.h>

int main(void)
{
  int W, H, x, y, r;

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if(x<0)
    x = x*(-1);
  if(y<0)
    y = y*(-1);

  if(x+r > W || y+r > H)
    printf("No\n");
  else
    printf("Yes\n");

  return 0;
}
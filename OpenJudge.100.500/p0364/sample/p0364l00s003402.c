#include <stdio.h>
int main(void)
{
  int W,H,x,y,r;

  scanf("%d",&W);
  scanf("%d",&H);
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&r);

  if (y>r && x>r && x+r<W && y+r<H) {
	printf("Yes\n");
  }
  else
	printf("No\n");

  return 0;
}
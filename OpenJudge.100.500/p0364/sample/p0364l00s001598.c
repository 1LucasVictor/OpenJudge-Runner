#include<stdio.h>
int main()
{
int W;
int H;
int x;
int y;
int r;
scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

if(x>=r&&y>=r&&x<=W-r&&y<=H-r)
{
  printf("Yes\n");
}
else
{
 printf("No\n");
}

return 0;
 
}
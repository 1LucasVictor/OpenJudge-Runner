#include <stdio.h>

int main(void){
  int W,H,x,y,r,xmin,xmax,ymin,ymax;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  xmin=x-r;
  xmax=x+r;
  ymin=y-r;
  ymax=y+r;
  if(0<=W && W<=100 && 0<=H && H<=100 && -100<=x && x<=100 && -100<=y && y<=100 && 0<=r && r<=100){
      if(0<=xmin && xmax<=W && 0<=ymin && ymax<=H){
          printf("Yes\n");
      }else{
          printf("No\n");
      }
  }
  return 0;
}
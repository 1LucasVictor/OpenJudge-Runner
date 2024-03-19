#include <stdio.h>
int main(){
  int x,y,r,W,H;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  /*
  -100<=x;
   y<=100;
  0<W<=100;
  0<H<=100; 
  0<r<=100;
  */

  if(0<=x-r && x+r<=W && 0<=y-r && y+r<=H){
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }



  return 0;
}
#include "stdio.h"
//長方形の中に円があるか判定
//2018/02/05
int main(void){
  int w,h,x,y,r;
  scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
  if(((x-r) >= 0) && ((y-r) >= 0) && ((x+r) <= w) && ((y+r) <= h)){
    puts("Yes");
  }else{
    puts("No");
  }
}


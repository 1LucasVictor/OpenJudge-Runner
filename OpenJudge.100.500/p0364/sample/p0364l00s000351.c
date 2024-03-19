#include<stdio.h>

int main(void){
  int W,H,x,y,r;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  if(r <= x&&W - r >= x){
    if(r <= y&&H - r >= y){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    printf("No\n");
  }
  return 0;
}
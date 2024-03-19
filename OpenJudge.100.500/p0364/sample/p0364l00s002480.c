#include<stdio.h>
int main(){
  int w,h,x,y,r;
  scanf("%d %d %d %d %d\n",&w,&h,&x,&y,&r);
  int i = x+r;
  int j = y+r;
  if(i <= w && j <= h){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
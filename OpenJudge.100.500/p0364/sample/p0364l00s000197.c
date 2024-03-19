#include<stdio.h>
int main (void){
  int w,h,x,y,r,a=0;
  scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
  if(x-r>0&&x+r<w){
    a++;
  }
  if(y-r>0&&y+r<h){
    a++;
  }
  if(a==2){
    printf("Yes\n");
  } else{
    printf("No\n");
  }
  return 0;
}
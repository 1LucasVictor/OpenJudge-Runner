#include<stdio.h>
int main(void){
  int h,a;
  scanf("%d %d",&h,&a);
  int ans=(h+a-1)/a;
  printf("%d",ans);
  return 0;
}
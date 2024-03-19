#include<stdio.h>
int main(void){
  int h,a,i=0;
  scanf("%d %d",&h,&a);
  while(h>0){
    h = h-a;
    i++;
  }
  printf("%d",i);
  return 0;
}
#include<stdio.h>
int main(void){
  int h,a,i,count;
  scanf("%d %d",&h,&a);
  count=0;
  while(1){
    h=h-a;
    count+=1;
    if(h<=0){
      break;
    }
  }
  printf("%d",count);
  return 0;
}
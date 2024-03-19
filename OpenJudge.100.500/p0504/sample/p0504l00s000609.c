#include<stdio.h>
int main(){
  int H,A,i;
  scanf("%d %d",&H,&A);
  for(i = 1;i <= H;i++){
    if((H-i*A)<=0)break;
  }
  printf("%d",i);
  return 0;
}
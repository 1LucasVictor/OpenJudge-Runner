#include<stdio.h>
int main(void){
  
  int i, n;
  
  scanf("%d", &i);
  
  n = i % 10;
  
  if(n==2 || n==4 || n==5 || n==7 || n==9){
    printf("hon\n");
  }else if(n==0 || n==1 || n==6 || n==8){
    printf("pon\n");
  }else if(n==3){
    printf("bon\n");
  }
  
  return 0;
}
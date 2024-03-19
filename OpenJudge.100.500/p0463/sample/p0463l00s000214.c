#include<stdio.h>
#include<stdlib.h>

int main(void){
  int n;
  
  scanf("%d",&n);
  
  n=n%10;
  
  if(n==3){
    printf("bon");
  }else if(n==0||n==1||n==6||n==8){
    printf("pon");
  }else{
    printf("hon");
  }
  return 0;
}
    
  
  
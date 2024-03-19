#include<stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  int num = n%10;
  if((num == 2)||(num==4)||(num==5)||(num==7)||(num==9)){
    printf("hon");
  }
  else if((num==0)||(num==1)||(num==6)||(num==8)){
    printf("pon");
  }
  else{
    printf("bon");
  }
  return 0;
}

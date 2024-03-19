#include<stdio.h>
int main(void){
  int a,num;
  scanf("%d",&a);
  num= a%10;
  if(num==2||num==4||num==5||num==7||num==9){
    printf("hon");
  }else if(num==3){
    printf("bon");
  }else{
    printf("pon");
  }
  return 0;
}
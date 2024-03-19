#include<stdio.h>

int main(void){
  int a;
  int b;

  scanf("%d",&a);
  scanf("%d",&b);


  int seki;
  seki = a * b;
  int hantei;
  hantei = seki % 2;

  if(hantei == 1){

    printf("Odd");

  }else{

    printf("Even");

  }

  return 0;
}

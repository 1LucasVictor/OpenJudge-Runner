#include <stdio.h>

int a,b;


void odd_or_even(int a,int b){
  if(a*b%2==1){
    printf("Odd");
  }else{
    printf("Even");
  }
  return;
}

int main(void){
  scanf("%d%d", &a, &b);
  odd_or_even(a,b);
  return 0;
}
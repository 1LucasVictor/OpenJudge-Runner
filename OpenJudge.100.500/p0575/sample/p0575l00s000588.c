#include "stdio.h"

int X, A;

int main(void){
  scanf("%d %d", &X, &A);
  if(X < A){
    printf("0");
  }else{
    printf("10");
  }
}
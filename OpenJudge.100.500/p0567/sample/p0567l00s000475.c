#include<stdio.h>

int main(void){
  int A, B, C, D;
  
  do{
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
  }while(A < B);
  
  D = C - A + B;
  if(D < 0){
    D = 0;
  }
  
  printf("%d", D);
  
  return 0;
}
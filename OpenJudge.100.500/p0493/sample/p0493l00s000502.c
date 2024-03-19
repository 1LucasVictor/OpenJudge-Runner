#include<stdio.h>

int main(void){
  int X;
  int m,n,u;
  
  scanf("%d",&X);
  
  m = X/500;
  X = X - m*500;
  
  n = X/5;
  
  u = m * 1000 + n * 5;
  
  printf("%d",u);
  return 0;
}
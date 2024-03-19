#include <stdio.h>
int main(void){
  int X;
  int S;
  int T;
  scanf("%d",&X);
  S=(X/500)*1000;
  T=((X%500)/5)*5;
  printf("%d\n",S+T);  

  
  return 0;
  }
#include <stdio.h>


int trans(x,y,z){
  return z-(x-y);
}

int main(void){
  int A,B,C,kekka;
  scanf("%d %d %d",&A,&B,&C);
  kekka = trans(A,B,C);
  printf("%d",kekka);
}
#include <stdio.h>


int trans(x,y,z){
  if((z-(x-y))>0){
  return z-(x-y);
  }else{
    return 0;
  }
}
int main(void){
  int A,B,C,kekka;
  scanf("%d %d %d",&A,&B,&C);
  kekka = trans(A,B,C);
  printf("%d",kekka);
}
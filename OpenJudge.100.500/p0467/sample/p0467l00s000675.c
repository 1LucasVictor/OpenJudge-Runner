#include <stdio.h>

int main(void){
  int A,B,C,K;
  scanf("%d%d%d%d",&A,&B,&C,&K);
  int point=0;
  
    while(K>0&&A>0){
      point++;
      K--;
      A--;
    }
    while(K>0&&B>0){
      K--;
      B--;
    }
    while(K>0&&C>0){
      point--;
      K--;
      C--;
    }
  
  printf("%d",point);
  
  return 0;
  
}
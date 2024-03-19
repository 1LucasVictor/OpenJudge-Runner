#include<stdio.h>

int main(void){
  int A,B,C,K;
  int max=0;
  int i;
  
  scanf("%d %d %d %d",&A,&B,&C,&K);
  i = A+B;
  
  if(K<=i){
    max = A;
  }
  else{
    K = K-i;
    max = A-K;
  }
  
  printf("%d",max);
  
  return 0;
}
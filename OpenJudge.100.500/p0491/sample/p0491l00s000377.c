#include<stdio.h>
int main(void){
  long int N,K,A,I;
  if(scanf("%ld %ld",&N,&K)==1){
    I++;
    I--;
  }
  while(1){
    if(N>=K){
      A =N;
      I = K;
    }else{
      A=K;
      I=N;
    }
    if(N<=(A-I))
      break;
    N = A-I;
  }
  printf("%ld",N);
}

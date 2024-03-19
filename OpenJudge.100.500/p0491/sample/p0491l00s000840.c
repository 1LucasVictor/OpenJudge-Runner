#include<stdio.h>

int main(void){
  unsigned long long int N,K;
  unsigned long long int x;
  
  scanf("%lld %lld",&N,&K);
  
  N = N % K;
  x = K - N;
  
  if(x<N){
    N = x;
  }
  
  printf("%lld",N);
  return 0;
}
#include<stdio.h>

int main(void){
  long long int N, K;
  scanf("%lld %lld", &N, &K);
  if(abs(abs(N - K) - K) < N % K){
    printf("%lld", abs(abs(N - K) - K));
  }else{
    printf("%lld", N % K);
  }
  
  return 0;
}
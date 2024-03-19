#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
  long long N;
  long long K;
  if(scanf("%lld %lld",&N,&K)==1);
  long long S;
  S=N%K;
  long long A;
    A=K-S;
    if(A<S){
      printf("%lld",A);
    }
    else{
      printf("%lld",S);
    }
  return 0;
}
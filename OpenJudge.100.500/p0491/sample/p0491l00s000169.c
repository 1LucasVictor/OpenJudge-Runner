#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
  long long N;
  long long K;
  scanf("%lld %lld",&N,&K);
  long long S;
  S=N%K;
  if(S==0){
    printf("0\n");
    return 0;
  }
  long long A;
    A=abs(S-K);
    if(A<S){
      printf("%lld",A);
    }
    else{
      printf("%lld",S);
    }
  return 0;
}
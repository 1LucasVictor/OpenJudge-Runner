#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
  long long N;
  long long K;
  int i;
  scanf("%lld %lld",&N,&K);
  long long S;
  S=N%K;
  if(S==0){
    printf("0\n");
  }
  else{
    if(abs(S-K)<S){
      printf("%lld",abs(S-K));
    }
    else{
      printf("%lld",S);
    }
  }
  return 0;
}
    
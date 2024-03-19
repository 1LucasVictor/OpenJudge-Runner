#include <stdio.h>

int main(){
  long N, K = 0;
  scanf("%ld%ld", &N, &K);
  long mod = N % K;
  if (N < K){
    if (K - N > mod){
    printf("%ld\n", mod);
    }else{
      printf("%ld\n", K - N);
    }
  }else if (mod != 0){
    printf("%ld\n", K - mod);
  }else{
    printf("0");
  }
}
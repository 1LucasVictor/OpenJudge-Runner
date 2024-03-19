#include<stdio.h>
 
int main(void){
  long N, K, BUF;
  scanf("%ld %ld", &N, &BUF);
  if(N < BUF){
    K = N;
    N = BUF;
  }
  else K = BUF;
  while(1){
    long x = N % K;
    if(x != 0){
      N = K;
      K = x;
    }
    else{
      printf("%ld\n", K);
      return 0;
    }
  }
}
#include <stdio.h>

int main(void){
  long int N,K;
  scanf("%ld",&N);
  scanf("%ld",&K);
  long int p = 0;
  long int m = 0;
  p = N % K;
  m = (p - K) * -1;
  if(p < m){
    printf("%ld",p);
  }
  else{
    printf("%ld",m);
  }
  return 0;
}

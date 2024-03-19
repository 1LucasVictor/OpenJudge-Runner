#include<stdio.h>
int main(void){
  long N,K,sa;
  scanf("%ld",&N);
  scanf("%ld",&K);
  sa=N%K;
  if(K>2*sa)
    printf("%ld",sa);
  if(K<2*sa)
    printf("%ld",K-sa);
  return 0;
  }
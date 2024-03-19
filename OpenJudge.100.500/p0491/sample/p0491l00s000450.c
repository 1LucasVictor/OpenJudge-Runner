#include <stdio.h>

int main(){
  int N,K;
  scanf("%d%d",&N,&K);
  
  int abs = ((N - K) >= 0) ? N - K : K - N;
  
  printf("%d\n",N % abs);
  
  return 0;
}
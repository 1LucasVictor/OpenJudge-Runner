#include<stdio.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  long long N, K, pN;
  unused = scanf("%lld %lld", &N, &K);

  if((N/K) > 100000) N = K;
  do{
    pN = N;
    N = abs(N-K);
  }while((pN - N) >= 0);

  printf("%lld", pN);
  return 0;
}
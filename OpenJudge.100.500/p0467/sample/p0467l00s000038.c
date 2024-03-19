#include<stdio.h>
#include<stdlib.h>
int main(){
  int unused __attribute__((unused));
  long long A, B, C, K, result = 0;
  unused = scanf("%lld %lld %lld %lld", &A, &B, &C, &K);


  if(K >= A){
    result += A;
    K  = K-A;
  }
  if(K > 0 && K >= B) K = K - B;
  if(K > 0 && K <= C) result -= K;

  printf("%lld", result);
  return 0;
}
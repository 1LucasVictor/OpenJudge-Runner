#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  long long i, A, B, C, K, result = 0;
  unused = scanf("%lld %lld %lld %lld", &A, &B, &C, &K);

  i = 0;
  while(i < K){
    if(i < A){
      result += A;
      i += A;
    }else if(i >=A && i < A+B){
      i += B;
    }
    else if(i >= A+B && i < A+B+C){
      result += -1;
      i += C;
    }
  }
  printf("%lld", result);
  return 0;
}

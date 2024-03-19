/* C - Replacing Integer */

#include <stdio.h>

long long absolute(long long a, long long b){
  if(a >= b) return a - b;
  else return b - a;
}

long long Replace(long long n, long long k){
  if(n == k){
    return 0;
  }else if(n > k){
    return Replace(n % k, k);
  }else{
    if(n <= absolute(n, k)) return n;
    else return absolute(n, k);
  }
}

int main(void){
  long long N, K;
  scanf("%lld %lld", &N, &K);
  printf("%lld", Replace(N, K));
}

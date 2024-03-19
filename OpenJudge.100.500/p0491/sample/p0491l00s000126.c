/* C - Replacing Integer */

#include <stdio.h>

int absolute(int a, int b){
  if(a >= b) return a - b;
  else return b - a;
}

int Replace(int n, int k){
  if(n == k){
    return n;
  }else if(n > k){
    if(n % k == 0) return 0;
    else return Replace(n % k, k);
  }else{
    if(n <= absolute(n, k)) return n;
    else return absolute(n, k);
  }
}

int main(void){
  int N, K;
  scanf("%d %d", &N, &K);
  printf("%d", Replace(N, K));
}

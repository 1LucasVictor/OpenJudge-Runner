#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
  long A, B, C, K, ans = 0;
  scanf("%ld %ld %ld %ld", &A, &B, &C, &K);
  if (K > A) {
    ans += A;
    K -= A;
  }
  else {
    ans += K;
    K = 0;
  }

  if (K > B) {
    K -= B;
  }
  else {
    K = 0;
  }

  if (K > C) {
    ans -= C;
  }
  else {
    ans -= K;
  }
  printf("%ld", ans);
  return 0;
}

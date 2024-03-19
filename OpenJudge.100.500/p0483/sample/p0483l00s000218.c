#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main() {
  long i, j = 0, k, num = 0,  ans = 0, N = 0;
  scanf("%ld", &N);
  num = N;
  for (i = 100; i >= 1; i /= 10) {
    if (num / i == 7) ans++;
    num -= num / i * i;
  }
  if (ans) printf("Yes");
  else     printf("No");
  return 0;
}

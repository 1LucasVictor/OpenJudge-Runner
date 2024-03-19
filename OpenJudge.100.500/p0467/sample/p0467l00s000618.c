#include <stdio.h>

int main(void) {
  int A;
  int B;
  int C;
  int K;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &K);
  int s_max = 0;
  if (A >= K) {
    s_max = K;
  } else if (A + B >= K) {
    s_max = A;
  } else {
    s_max = A - (K - (A + B));
  }
  printf("%d\n", s_max);
  return 0;
}
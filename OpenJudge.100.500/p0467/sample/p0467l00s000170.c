#include <stdio.h>

int main(void) {
  int A;  // 1
  int B;  // 0
  int C;  //-1
  int K;  //持ってる枚数
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &K);
  int s_max = 0;  //最大値
  if (A >= K) {
    s_max = K;
  } else if (A + B >= K) {
    s_max = A;
  } else {
    s_max = (K - (A + B)) * (-1);
  }
  printf("%d\n", s_max);
  return 0;
}
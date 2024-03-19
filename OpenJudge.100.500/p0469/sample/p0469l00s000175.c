#include <stdio.h>

int main(void) {
  int K;
  int A;
  int B;
  int C;
  scanf("%d", &K);
  scanf("%d", &A);
  scanf("%d", &B);
  for (int i = 1; K * i < B; i++) {
    if (A <= K * i && K * i <= B) {
      C = 1;
    } else {
      C = 0;
    }
  }
  if (C == 1) {
    printf("%s\n", "OK");
  } else {
    printf("%s\n", "NG");
  }
  return 0;
}
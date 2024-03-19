#include <stdio.h>

int main(void) {
  int A, B, D, K, N;
  scanf("%d%d%d", &A, &B, &K);
  D = 0;
  N = 0;
  while (N<K) {
    D++;
    if (!(A%D) && !(B%D)) N++;
  }
  printf("%d\n", D);
  return 0;
}
  
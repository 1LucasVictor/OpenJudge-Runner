#include <stdio.h>

int main(void) {
  int A, B, D, K, N;
  scanf("%d%d%d", &A, &B, &K);
  D = A;
  if (D<B) D = B;
  N = 0;
  while (N<K && D>1) {
    D--;
    if (!(A%D) && !(B%D)) N++;
  }
  printf("%d\n", D);
  return 0;
}
  
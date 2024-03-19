#include <stdio.h>
#include <stdlib.h>

int main() {
  int A, B, C, D, E, F = 0;
  scanf("%d %d", &A, &B);
  C = A + B;
  D = A - B;
  E = A * B;

  if (C > D && C > E) {
    F = C;
  } else if (D > E) {
    F = D;
  } else {
    F = E;
  }
  printf("%d\n", F);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  int A, B, C, D, E, F = 0;
  scanf("%d %d", &A, &B);
  C = A + B;
  D = A - B;
  E = A * B;

  if ((C > D) && (C > E) && (C > F)) {
    F = C;
  }
  if ((D > C) && (D > E) && (D > F)) {
    F = D;
  }
  if ((E > C) && (E > D) && (E > F)) {
    F = E;
  }
  printf("%d\n", F);
}

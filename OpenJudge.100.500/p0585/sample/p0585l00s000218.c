#include <stdio.h>

int main (void) {
  int A, B, T, ans, i;

  scanf ("%d %d %d", &A, &B, &T);

  T = T + 0.5;
  i = T / A;
  ans = B * i;

  printf ("%d", ans);
}
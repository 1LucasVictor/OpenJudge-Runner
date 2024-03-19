#include <stdio.h>

int main (void) {
  int A, B, C, ans;

  scanf ("%d %d %d", &A, &B, &C);

  ans = C - A + B;
  
  if (ans < 0) {
    ans = 0;
  }
  
  printf ("%d", ans);
}
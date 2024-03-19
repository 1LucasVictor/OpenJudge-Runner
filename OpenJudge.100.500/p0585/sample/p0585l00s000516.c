#include <stdio.h>

int main(void) {

  int A, B, T;
  do {
    scanf("%d %d %d", &A, &B, &T);
  } while (A < 1 || A > 20 || B < 1 || B > 20 || T < 1 || T > 20);

  int n = 0;
  for (int i = T; i - A >= 0; i-= A) {
    n += B;
  }

  printf("%d\n", n);

  return 0;
}
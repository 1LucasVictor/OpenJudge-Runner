#include <stdio.h>

int main(int argc, char const *argv[]) {

  int A, B, K;
  scanf("%d %d %d", &A, &B, &K);

  if (A < B) {
    int C = B;
    B = A;
    A = C;
  }

  int c = 0;
  int i;
  for (i = 1; i <= A; i++) {
    if (A % i == 0 && B % i == 0) {
      c += 1;
      if (c == K) {
        break;
      }
    }
  }

  printf("%d\n", i);

  return 0;

}

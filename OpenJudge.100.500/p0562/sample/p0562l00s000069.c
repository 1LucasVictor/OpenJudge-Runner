#include <stdio.h>
int main() {
  int A, B, num, count;
  count = 1;
  scanf("%d%d", &A, &B);
  num = A;
  for (;;) {
    if (num >= B) {
      break;
    }
    num += A - 1;
    ++count;
  }
  printf("%d\n", count);
  return 0;
}
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
  if (B == 1) {
    count = 0;
  }
  printf("%d\n", count);
  return 0;
}

#include <stdio.h>

int main(void) {
  int A, B, sum, sub, mul;

  scanf("%d", &A);
  scanf("%d", &B);
  sum = A + B;
  sub = A - B;
  mul = A * B;

  if (sum > sub) {
    if (sum > mul) {
      printf("%d\n", sum);
    } else {
      printf("%d\n", mul);
    }
  } else if (sub > mul) {
    printf("%d\n", sub);
  }

  return 0;
}

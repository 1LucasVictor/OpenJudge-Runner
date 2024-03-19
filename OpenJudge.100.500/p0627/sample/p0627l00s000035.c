#include <stdio.h>

int main(void) {
  int A, B, max, sum, sub, mul;

  scanf("%d %d", &A, &B);
  sum = A + B;
  sub = A - B;
  mul = A * B;

  max = sum;
  if (max < sub) max = sub;
  if (max < mul) max = mul;

  printf("%d\n", max);

  return 0;
}

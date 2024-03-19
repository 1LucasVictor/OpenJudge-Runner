#include <stdio.h>

int main()
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  int remain = C-A+B;
  if (0>remain) {
    remain=0;
  }

  printf("%d\n", remain);

  return 0;
}

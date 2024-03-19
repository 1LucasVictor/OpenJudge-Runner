#include <stdio.h>

int main(void)
{
  int L, R;
  scanf("%d %d", &L, &R);

  int i = L % 2019;
  int j;
  if (2019 - i + L <= R) {
    i = 0;
  } else {
    j = i + 1;
  }

  printf("%d\n", i * j);

  return 0;
}
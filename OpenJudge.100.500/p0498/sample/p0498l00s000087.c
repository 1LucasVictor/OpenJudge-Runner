#include <stdio.h>

int main(void)
{
  int n;
  int total;

  // 入力
  scanf("%d", &n);

  if (n % 2 == 0) {
    total = n / 2;
  } else {
    total = n / 2 + 1;
  }

  // 出力
  printf("%d\n", total);

  return 0;
}
#include <stdio.h>

int main(void)
{
  int n, n_500, n_5, fun_500, fun_5;
  scanf("%d", &n);
  n_500 = (n / 500);
  n_5 = (n - n_500 * 500) / 5;
  fun_500 = n_500 * 1000;
  fun_5 = n_5 * 5;
  printf("%d", fun_500 + fun_5);
  return 0;
}
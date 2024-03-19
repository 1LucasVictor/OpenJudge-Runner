#include <stdio.h>

int main(void) 
{
  int i, n, amount = 100000;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    amount *= 1.05;

    if (amount % 1000 != 0) 
      amount = amount - amount % 1000 + 1000;
  }

  printf("%d\n", amount);

  return 0;
}
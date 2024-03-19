#include <stdio.h>

int main(void)
{
  int i;
  int divisor = 0;
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  for (i = a; i <= b; i++) {
    if (c % i == 0) divisor++;
  }

  printf("%d\n", divisor);
  
  return 0;
}
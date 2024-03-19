#include <stdio.h>

int main(void)
{
  int x, gra = 0;

  scanf("%d", &x);

  while (x >= 500) {
    x -= 500;
    gra += 1000;
  }
  while (x >= 5) {
    x -= 5;
    gra += 5;
  }

  printf("%d\n", gra);

  return 0;
}





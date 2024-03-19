#include <stdio.h>

int main(void)
{
  int debt;
  int num, i;

  debt = 100000;

  scanf("%d", &num);

  for(i = 1; i <= num ; i++){
    debt *= 1.05;
    debt += 999;
    debt /= 1000;
    debt *= 1000;
  }

  printf("%d\n", debt);

  return 0;
}
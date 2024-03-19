#include <stdio.h>

void factorize(int num, int divisor[], int *index);

int
main(void)
{
  int a, b, c, i;
  int count = 0;
  scanf("%d%d%d", &a, &b, &c);
  for (i = a; i <= b; i++) {
    if (c % i == 0) {
      count++;
    }
  }
  printf("%d\n", count);
}

void
factorize(int num, int divisor[], int *index)
{
  *index = 0;
  while (num % 2 == 0) {
    num = num / 2;
    divisor[*index] = 2;
    *index += 1;
    printf("*index = %d\n", *index);
    printf("divisor[%d] = %d\n", *index, 2);
  }

  int i;
  for(i = 3; i * i < num; i += 2) {
    while (num % i == 0) {
      num = num / i;
      divisor[*index] = i;
      *index += 1;
      printf("*index = %d\n", *index);
      printf("divisor[%d] = %d\n", *index, i);
    }
  }

  if (num > 1) {
    divisor[*index] = num;
    *index += 1;
    printf("*index = %d\n", *index);
    printf("divisor[%d] = %d\n", *index, num);
  }
}
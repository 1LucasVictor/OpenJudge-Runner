#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a , b, c;

  scanf("%d %d %d", &a, &b, &c);

  int n = c - (a - b);
  if (n < 0)
    printf("0\n");
  else
    printf("%d\n", n);

  return 0;
}

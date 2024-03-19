#include <stdio.h>

void digit_scan(int a, int b)
{
  int i, sum;
  i = 1;

  sum = a + b;

  while((sum /= 10) != 0) 
    i++;

  printf("%d\n", i);
}
int main(int argc, char *argv[])
{
  int a, b;

  while((scanf("%d %d", &a, &b)) != EOF)
    digit_scan(a, b);

  return 0;
}
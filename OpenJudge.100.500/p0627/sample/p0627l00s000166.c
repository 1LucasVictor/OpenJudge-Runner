#include <stdio.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))

int
main(int argc, char *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", Max(a + b, Max(a - b, a * b)));
  return 0;
}
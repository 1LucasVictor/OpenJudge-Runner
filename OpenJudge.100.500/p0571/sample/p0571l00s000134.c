#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

int main (int argc, char **argv)
{
  int n = 0;
  int a = 0;
  int b = 0;

  scanf("%d %d %d", &n, &a, &b);

  printf("%d\n", ((a * n) < b ? (a * n) : b));

  return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);

  printf("%d\n", (int)fmax(fmax(a + b, a - b), a * b));

  return 0;
}
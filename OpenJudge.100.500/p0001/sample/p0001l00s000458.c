#include <stdio.h>

int main(void)
{
  unsigned int x1, x2, sum, digits;
  while(fscanf(stdin, "%d %d", &x1, &x2) != EOF)
    {
      sum = x1 + x2;
      digits = 0;
      while(sum > 0)
        {
          sum /= 10;
          digits++;
        }

      printf("%d\n", digits);
    }

  return 0;
}
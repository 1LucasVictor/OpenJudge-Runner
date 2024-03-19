#include <stdio.h>
int
main (void)
{
  unsigned a, b;
  unsigned tmp, i, buf;
  while (scanf ("%d%d", &a, &b) != EOF)
    {
      tmp = (a > b) ? b : a;
      for (i = 1; i <= tmp; i++)
	if (a % i == 0 && b % i == 0)
	  buf = i;
      printf ("%d ", buf);
      tmp = (a > b) ? a : b;
      for (i = tmp;; i++)
	if (i % a == 0 && i % b == 0)
	  break;
      printf ("%d\n", i);
    }
  return 0;
}
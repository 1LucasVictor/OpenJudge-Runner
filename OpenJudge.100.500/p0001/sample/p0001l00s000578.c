#include<stdio.h>
int
main (void)
{
  int i, j;
  while (EOF != scanf ("%d %d", &i, &j))
    {
      int k = 0;
      int sum = i + j;
      while (sum > 0)
	{
	  sum /= 10;
	  k++;
	}
      printf ("%d\n", k);
    }
  return 0;
}
#include <stdio.h>

#define MAX_INPUT 50

void dataset(int*);

int
main()
{
  int kumiawasenokazu[MAX_INPUT + 1] = {};
  dataset(kumiawasenokazu);

  int n;
  while(-1 != scanf("%d\n", &n))
    {
      printf("%d\n", kumiawasenokazu[n]);
    }
  
  return 0;
}

void dataset(int *kumiawase)
{
  int a, b, c, d;
  for(a = 0; a <= 9; a++)
    {
      for(b = 0; b <= 9; b++)
	{
	  for(c = 0; c <= 9; c++)
	    {
	      for(d = 0; d <= 9; d++)
		{
		  kumiawase[a + b + c + d]++;
		}
	    }
	}
    }
}


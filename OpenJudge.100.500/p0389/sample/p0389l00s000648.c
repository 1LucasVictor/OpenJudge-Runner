#include <stdio.h>
#include <string.h>

#define MAX 400
#define MAXSHUFFLE 100
int
main ()
{
  char str[MAX];
  int kaisuu = 0;
  int h[MAXSHUFFLE];
  int i, j, size;

  while (1)
    {
      /* initialize */
	  
      for (i = 0; i < MAX; i++)
		{
		  str[i] = '\0';
		}
      for (i = 0; i < MAXSHUFFLE; i++)
		{
		  h[i] = 0;
		}

      /* data acquire */

	  scanf("%s\n", str);
	  
      if (str[0] == '-')
		{
		  return 0;
		}
      else
		{
		  size = strlen(str);
		  scanf ("%d\n", &kaisuu);
		  for (i = 0; i < kaisuu; i++)
			{
			  scanf ("%d\n", &h[i]);
			}
		}
	  
      /* process */

      for (i = 0; i < kaisuu; i++)
		{
		  strcat (str, str);
		  
		  for (j = 0; j < size; j++)
			{
			  str[j] = str[j + h[i]];
			}

		  for (j = size; j < MAX; j++)
			{
			  str[j] = '\0';
			}
		}
	  
	  /* print result */
	  
	  printf ("%s\n", str);
	}  
}


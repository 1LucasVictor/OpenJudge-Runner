#include <stdio.h>
#include <string.h>

#define MAX 201
#define MAXx2 402
#define MAXSHUFFLE 100

int
main ()
{
  char str[MAX];
  char temp[MAXx2] = {0};
  int kaisuu = 0;
  int h[MAXSHUFFLE] = {0};
  int i, j, k, size;

  while (1)
    {
      /* initialize */
	  
      for (i = 0; i < MAX; i++)
		{
		  str[i] = '\0';
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
		  
		  for (j = 0; j < MAXx2; j++)
			{
			  temp[j] = '\0';
			}
		  
		  strcat (temp, str);
		  strcat (temp, str);

		  for (k = 0; k < size; k++)
			{
			  str[k] = temp[k + h[i]];
			}

		  for (k = size; k < MAX; k++)
			{
			  str[k] = '\0';
			}
		}
	  
	  /* print result */
	  
	  printf ("%s\n", str);
	}  
}


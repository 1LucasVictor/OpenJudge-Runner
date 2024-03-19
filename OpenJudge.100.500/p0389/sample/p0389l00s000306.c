#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shuffle(char str[201], int n)
{
  char *holder = malloc(strlen(str) + 1);;
  strcpy(holder, str+n);
  strncat(holder, str, n);
  strcpy(str, holder);
  free(holder);
}

int main(void)
{
  int n, shuffles, i;
  while (1)
    {
      char str[201];
      scanf(" %200s", str);
      if (strcmp(str, "-") == 0)
	return 0;
      scanf(" %d", &shuffles);
      for (i = 0; i < shuffles; i++)
	{
	  scanf(" %d", &n);
	  shuffle(str, n);
	}
      printf("%s\n", str);
    }
  return 0;
}


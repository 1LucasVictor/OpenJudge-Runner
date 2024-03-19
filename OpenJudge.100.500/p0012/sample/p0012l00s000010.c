#include <stdio.h>

int main()
{
  int n, i;
  int num[10];

  i = 0;
  while(scanf("%d", &n) != EOF)
    {
      if(n == 0)
	{
	  i--;
	  printf("%d\n", num[i]);
	}
      else
	{
	  num[i] = n;
	  i++;
	}
    }

  return 0;
}
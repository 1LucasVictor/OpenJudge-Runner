#include<stdio.h>
int main()
{
  int n, num, sum = 0, i, j;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &num);
      if(num % 2 == 0 && num > 2)
	{
	  sum++;
	}
      else
	{
	  for(j = 2; j < num; j++)
	    {
	      if(num % j == 0)
		{
		  sum++;
		  break;
		}
	    }
	}
    }
  printf("%d\n", n - sum);
  return 0;
}


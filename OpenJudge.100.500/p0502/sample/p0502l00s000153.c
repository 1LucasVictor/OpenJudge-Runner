#include <stdio.h>

int	main(void)
{
  	int	N;
  	int	a;
  	int	num;
  	int	i;
  
  	num = scanf("%d", &N);
  	if (num != 1)
      	return (0);
  
  	for (i=0; i<N; i++)
    {
      	num = scanf("%d", &a);
      	if (num != 1)
          	return (0);
        if (a % 2 == 1)
            continue ;
      	else if (a % 6 == 0)
      	{
      	    continue ;
      	}
      	else if (a % 10 == 0)
      	{
      	    continue ;
      	}
      	else if (a % 6 != 0)
      	{
          	printf("DENIED");
          	return (0);
      	}
      	else if (a % 10 != 0)
      	{
          	printf("DENIED");
          	return (0);
      	}
    }
  	printf("APPROVED");
  	return (0);
}
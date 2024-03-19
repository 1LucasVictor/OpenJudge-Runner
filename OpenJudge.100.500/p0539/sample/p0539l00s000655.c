#include <stdio.h>

int	main(void)
{
  	int	N;
  	int	num;
  	int i;
  	int ans;
  
  	num = scanf("%d", &N);
  	if (num != 1)
      	return (0);
  
  	for (i=1; i<10; i++)
    {
      	if (N % i == 0)
        {
      		ans = N / i;
          	if (ans > 9)
            {
              	continue ;
            }
          	else
            {
              	printf("Yes");
              	return (0);
            }
        }
    }
  	printf("No");
  	return (0);
}
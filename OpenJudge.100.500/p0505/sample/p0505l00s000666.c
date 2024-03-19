#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
  	int	H;
  	int	N;
  	int	*a;
  	int	num;
  	int	i;
  	int	sum;
  
  	num = scanf("%d %d", &H, &N);
  	if (num != 2)
      	return (0);
  	a = (int *)malloc(sizeof(int) * N);
  	sum = 0;
  	for (i=0; i<N; i++)
    {
      	num = scanf("%d", &a[i]);
      	sum += a[i];
      	if (num != 1)
          	return (0);
    }
  
  	if (H > sum)
      	printf("No");
  	else
      	printf("Yes");
  	return (0);
}
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	long num, dist;

	scanf("%ld %ld", &num, &dist);
	long x[num],y[num];
	int i = 0, sum = 0;
	while (i < num)
	{
		scanf("%ld %ld",&x[i], &y[i]);
		if ((x[i]*x[i] + y[i]*y[i]) <= dist*dist)
			sum++;
		i++;
	}
	printf("%d", sum);
	return(0);
}
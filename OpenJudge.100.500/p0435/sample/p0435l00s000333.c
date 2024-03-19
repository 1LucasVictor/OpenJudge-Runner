#include <stdio.h>
#include <math.h>

int	min(int a, int b)
{
	return ((a < b) ? a : b);
}

int	main(void)
{
	int	N, D;
	int	X[200000], Y[200000];
	int	i;
	int	res;

	scanf("%d %d", &N, &D);
	for (i = 0; i < N; i++)
		scanf("%d %d", &X[i], &Y[i]);
	res = 0;
	for (i = 0; i < N; i++)
	{
		if (sqrt(X[i] * X[i] + Y[i] * Y[i]) <= D)
			res++;
	}
	printf("%d\n", res);
	return (0);
}

#include <stdio.h>

long	ft_abs(int abs)
{
	if (abs < 0)
		abs *= -1;
	return (abs);
}

int		main(void)
{
	long N, K, a;
	scanf("%ld%ld",&N,&K);
	if (N < K)
	{
		a = K - N;
		if (a > N)
			printf("%ld", N);
		else
			printf("%ld", a);
	}
	if (N >= K)
	{
		N %= K;
		if (N < K)
			a = K - N;
		if (a >= N)
			printf("%ld", N);
		else if (a < N)
			printf("%ld", a);
	}

	return 0;
}

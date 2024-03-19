#include <stdio.h>

int		main()
{
	int		N, K;
	int		val, min;

	scanf("%d %d\n", &N, &K);
	val = N % K;
	min = val;
	if (val > ((double)K / 2.0))
		min = val - K;
	if (min < 0)
		min *= -1;
	printf("%d\n", min);
	return (0);
}

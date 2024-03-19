#include <stdio.h>
#include <math.h>

int		main()
{
	double	N, K;
	int		val, min;

	scanf("%lf %lf\n", &N, &K);
	val = fmod(N, K);
	min = val;
	if (val > ((double)K / 2.0))
		min = val - K;
	if (min < 0)
		min *= -1;
	printf("%d\n", min);
	return (0);
}

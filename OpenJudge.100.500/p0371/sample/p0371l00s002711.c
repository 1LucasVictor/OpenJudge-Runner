#include <stdio.h>          // printf(), scanf()

int
main(int argc, char** argv)
{
	long min, max, sum;

	int n;
	scanf("%d", &n);

	sum = 0;
	int i;
	for (i = 0; i < n; ++i)
	{
		int x;
		scanf("%d", &x);
		sum += x;
		if (i == 0 || x < min)
			min = x;

		if (i == 0 || x > max)
			max = x;
	}

	printf("%ld %ld %ld\n", min, max, sum);
	return 0;
}
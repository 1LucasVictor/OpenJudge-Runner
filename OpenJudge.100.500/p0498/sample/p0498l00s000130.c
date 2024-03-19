#include <stdio.h>

int		main()
{
	int		N;
	int		result;

	scanf("%d", &N);
	result = N / 2;
	if (N % 2 == 1)
		result++;
	printf("%d\n", result);
	return (0);
}

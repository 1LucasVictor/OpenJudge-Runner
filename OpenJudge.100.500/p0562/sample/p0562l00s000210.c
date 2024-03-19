#include <stdio.h>

int	main()
{
	int	A;
	int	B;
	int	sum;
	int	count;

	scanf("%d %d\n", &A, &B);
	sum = 1;
	count = 0;
	while (sum < B)
	{
		sum--;
		sum += A;
		count++;
	}
	printf("%d\n", count);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	A, B;
	unsigned int	sum;

	scanf("%u %u", &A, &B);
	sum = A + B;
	if (sum % 2 == 0)
		printf("%d\n", sum / 2);
	else
		printf("IMPSSIBLE\n");
	return (0);
}

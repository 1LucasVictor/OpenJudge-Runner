#include <stdio.h>

int	main(void)
{
	int	A, B;
	int	sum;

	scanf("%d %d", &A, &B);
	sum = A + B;
	if (sum % 2 == 0)
		printf("%d\n", sum / 2);
	else
		printf("IMPSSIBLE\n");
	return (0);
}

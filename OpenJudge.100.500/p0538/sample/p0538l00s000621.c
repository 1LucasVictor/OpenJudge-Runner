#include <stdio.h>

int		main()
{
	int		A, B, c;

	c = -1;
	scanf("%d %d\n", &A, &B);
	if (A < 10 && B < 10)
		c = A * B;
	printf("%d\n", c);
	return (0);
}

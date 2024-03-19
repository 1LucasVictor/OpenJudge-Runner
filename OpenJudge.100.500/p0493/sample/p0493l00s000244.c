#include <stdio.h>

int	main(void)
{
	int nb;
	int sum;
	sum = 0;
	scanf("%d", &nb);
	while (nb > 0)
	{
		if (nb >= 500)
		{
			nb -= 500;
			sum += 1000;
		}
		else if (nb >= 5)
		{
			nb -= 5;
			sum += 5;
		}
		else
			nb -= 1;
	}
	printf("%d", sum);
}

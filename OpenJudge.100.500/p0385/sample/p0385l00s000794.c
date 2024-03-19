#include <stdio.h>
#define SIZE 1000

int main(void)
{
	int x, sum;

	while (1)
	{
		scanf("%d", &x);
		if (x == 0)
			break;

		sum = 0;
		while (x > 0)
		{
			sum += x % 10;
			x /= 10;
		}
	printf("%d\n", sum);
	}

	return 0;
}
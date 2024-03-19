#include <stdio.h>

int main(void)
{
	int x,sum;

	while (1) {
		scanf("%d", &x);
		if (!x)	break;

		sum = 0;

		do {
			sum += x % 10;
			x = x / 10;
		} while (x);

		printf("%d\n", sum);
	}

	return 0;
}
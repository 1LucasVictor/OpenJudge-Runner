#include <stdio.h>

int main(void)
{
	long long int x;

	int sum;

	while (1) {
		scanf("%lld", &x);

		if (x == 0)
			break;

		sum = 0;

		while (x != 0) {
			sum += (x % 10);
			
			x /= 10;
		}

		printf("%d\n", sum);
	}

	return 0;
}
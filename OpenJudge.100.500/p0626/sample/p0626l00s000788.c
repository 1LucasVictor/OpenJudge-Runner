#include <stdio.h>

int main()
{
	int d, n;

	scanf("%d%d", &d ,&n);

	if (d == 0) {
		printf("%d\n", n + n / 100);
	} else if (d == 1) {
		printf("%d\n", n * 100 + n / 1000 * 100);
	} else if (d == 2) {
		printf("%d\n", n * 10000 + n / 100000 * 10000);
	}

	return 0;
}

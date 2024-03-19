#include <stdio.h>
int main(void)
{
	long max = -1000000;
	long min = 1000000;
	long sum = 0;
	long a;
	int i, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%ld", &a);
		if (max < a) {
			max = a;
		}

		if (min > a) {
			min = a;
		}

		sum += a;
	}

	printf("%ld %ld %ld\n", min, max, sum);

	return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned long i, j, k;
	unsigned long a[1000], b[1000];
	unsigned long gcd, lcm;

	for (i = 0; i < 1000; i++)
		if (scanf("%d %d", &a[i], &b[i]) == EOF)
			break;

	for (j = 0; j < i; j++) {
		while (a[i] != b[i]) {
			if (a[i] < b[i])
				b[i] = b[i] - a[i];
			else
				a[i] = a[i] - b[i];
		}

		gcd = a[i];

		for (k = 1, gcd = 1; k < (a[j] < b[j] ? a[j] : b[j]); k++)
			gcd = (a[j] % k == 0 && b[j] % k == 0) ? k : gcd;
	
		lcm = (a[j] / gcd) * (b[j] /gcd) * gcd;

		printf("%d %d\n", gcd, lcm);
	}

	return 0;
}
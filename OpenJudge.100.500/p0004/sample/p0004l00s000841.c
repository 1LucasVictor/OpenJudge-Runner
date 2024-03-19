#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	unsigned int i, j, k;
	unsigned int a[1000], b[1000], gcd, lcm;

	for (i = 0; i < 1000; i++)
		if (scanf("%d %d", &a[i], &b[i]) == EOF)
			break;

	for (j = 0; j < i; j++) {
		for (k = 1, gcd = 0; k < (a[j] < b[j] ? a[j] : b[j]); k++)
			gcd = a[j] % k == 0 && b[j] % k == 0 ? k : gcd;
	
		lcm = (a[j] / gcd) * (b[j] /gcd) * gcd;

		printf("%d %d\n", gcd, lcm);
	}

	return 0;
}
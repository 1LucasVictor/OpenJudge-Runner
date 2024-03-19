#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i, j;
	float a[1000], b[1000], c[1000], d[1000], e[1000], f[1000];
	
	for (i = 0; i < 1000; i++)
		if (scanf("%f %f %f %f %f %f", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]) == EOF)
			break;

	for (j = 0; j < i; j++) {
		float x = round((e[j] * c[j] - b[j] * f[j]) / (e[j] * a[j] - b[j] * d[j]) * 100) / 100;
		float y = round((c[j] * d[j] - a[j] * f[j]) / (b[j] * d[j] - a[j] * e[j]) * 100) / 100;

		printf("%.3f ", x == -0.000 ? 0.000 : x);
		printf("%.3f\n", y == -0.000 ? 0.000 : y);

	}

	return 0;
}
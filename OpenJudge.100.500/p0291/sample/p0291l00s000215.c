#include<stdio.h>

int main(void)
{
	int i, j, R, n, max, min, d;

	scanf("%d", &n);
	scanf("%d", &R);
	scanf("%d", &max);
	min = R;
	max = max - min;
	for (i = 2; i < n; i++) {
		scanf("%d", &R);
		d = R - min;
		if (max < d) max = d;
		if (min > R) min = R;
	}
	printf("%d\n", max);

	return 0;
}


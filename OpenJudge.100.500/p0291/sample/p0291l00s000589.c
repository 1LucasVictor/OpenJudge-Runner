#include <stdio.h>

int main() {

	int i, j, n, min, max, temp;
	int a[200000];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	min = 100000000;
	max = -999999999;

	for (i = 0; i < n; i++)
	{
		temp = a[i] - min;
		if (max < temp)
			max = temp;
		if (min > a[i])
			min = a[i];
	}

	printf("%d\n", max);

	return 0;

}

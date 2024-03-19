#include <stdio.h>

int main(void)
{
	int n,max,min,i;
	int a[10000] = { 0 };
	long int sum = 0;
	min = 1000000;
	max = -1000000;

	scanf("%d",&n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++) {
		if (max < a[i])
			max = a[i];

		if (min > a[i])
			min = a[i];

		sum += a[i];
	}

	printf("%d %d %d\n", min, max, sum);
	
	return 0;
}
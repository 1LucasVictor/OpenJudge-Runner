#include <stdio.h>

int main(void)
{
	int n, i, a[10000], max = -1000000, min = 1000000;
	long sum = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		if (max < a[i])
		max = a[i];
		if (min > a[i])
		min = a[i];
		
	}
	
	printf("%d %d %ld\n", min, max, sum);
	
	return 0;
}
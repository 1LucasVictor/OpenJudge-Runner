#include <stdio.h>

int main(void)
{
	int i, n, a[10000], min, max, sum;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	min = a[0];
	max = a[0];
	sum = a[0];
	for (i = 1; i < n; i++) {
		min = (a[i] < min) ? a[i] : min;
		max = (max < a[i]) ? a[i] : max;
		sum += a[i];
	}
	
	printf("%d %d %d\n", min, max, sum);
	
	return 0;
}
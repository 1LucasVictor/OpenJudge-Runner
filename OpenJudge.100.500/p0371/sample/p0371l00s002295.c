#include <stdio.h>

int main(void) {
	int i, n, x, min, max, total;
	scanf("%d", &n);
	scanf("%d", &x);
	min=x;
	max=x;
	total=x;
	for (i=2; i<=n; i++)
	{
		scanf("%d", &x);
		if (min>x) {
			min=x;
		}
		if (max<x) {
			max=x;
		}
		total=total+x;
	}
	printf("%d %d %d\n", min, max, total);
	
	return 0;
}
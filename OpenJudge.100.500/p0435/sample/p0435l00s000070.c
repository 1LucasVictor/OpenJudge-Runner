#include	<stdio.h>
#include	<math.h>

int		main(void)
{
	int n, d, x, y, sum, count;
	sum = count = 0;

	scanf("%d %d", &n, &d);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		sum = pow(x, 2) + pow(y, 2);
		
		if (sqrt(sum) <= d) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
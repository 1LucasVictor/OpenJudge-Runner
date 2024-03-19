#include <stdio.h>

int main(void)
{
	double i[5001];
	int x, y, n;
	double sum, max;
	
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (x = 0; x < n; x++) {
			scanf("%lf", &i[x]);
		}
		max = -500000001;
		for (x = 0; x < n; x++) {
			sum = 0;
			for (y = x; y < n; y++) {
				sum += i[y];
				if (max < sum) {
					max = sum;
				}
			}
		}
		printf("%.f\n", max);
	}
	
	return (0);
}
#include <stdio.h>

int main(void) {
	int n, a;
	int sum, max;
	while (1) {
		scanf("%d", &n);
		if( n == 0)
			break;
		sum = max =  0;
		while (n--) {
			scanf("%d", &a);
			sum += a;
			if( sum > max)
				max = sum;
			if( sum < 0)
				sum = 0;
		}
		printf("%d\n", max);
	}
	return 0;
}
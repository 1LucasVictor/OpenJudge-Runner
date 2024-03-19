#include <stdio.h>

int main(void) {
	int n, a;
	int sum, max;
	int count;
	while (1) {
		scanf("%d", &n);
		if( n == 0)
			break;
		sum = count = 0;
		max = -100001;
		while (n--) {
			scanf("%d", &a);
			if( count == 1 && sum + a < a) {
				sum = 0;
				count = 0;
			}
			sum += a;
			if( count > 0 && sum > max)
				max = sum;
			if( count > 0 && sum < 0) {
				sum = a;
				count = 0;
			}
			count++;
		}
		printf("%d\n", max);
	}
	return 0;
}
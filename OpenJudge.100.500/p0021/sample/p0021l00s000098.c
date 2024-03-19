#include <stdio.h>

int main(void)
{
	int i, n;
	long sum, max, a;
	
	while (scanf("%d", &n), n != 0){
		sum = 0;
		max = -10000000;
		for (i = 0; i < n; i++){
			scanf("%ld", &a);
			sum += a;
			if (sum > max) max = sum;
			if (sum < 0) sum = 0;
		}
		
		printf("%ld\n", max);
	}
	
	return 0;
}
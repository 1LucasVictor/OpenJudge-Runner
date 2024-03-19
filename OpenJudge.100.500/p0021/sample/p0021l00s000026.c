#include <stdio.h>

long a[10000];
int main(void)
{
	int i, j, n;
	long sum, max;
	
	while (scanf("%d", &n), n != 0){
		for (i = 0; i < n; i++){
			scanf("%ld", &a[i]);
		}
		
		max = -100000000;
		for (i = 0; i < n; i++){
			sum = 0;
			for (j = i; j < n; j++){
				sum += a[j];
				if (sum > max) max = sum;
			}
		}
		printf("%ld\n", max);
	}
	
	return 0;
}
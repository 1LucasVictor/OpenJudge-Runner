#include <stdio.h>

int main(void)
{
	int i, j, k, n, a[5001]; 
	long long max, sum;
	
	while (scanf("%d", &n), n != 0){
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		max = -1000000000;
		
		for (i = 0; i < n; i++){
			for (k = n; k > 0; k--){
				sum = 0;
				for (j = i; j < k; j++){
					sum += a[j];
					if (sum < 0) break;
				}
				if (max < sum){
					max = sum;
				}
			}
		}
		printf("%lld\n", max);
	}
	
	return 0;
}
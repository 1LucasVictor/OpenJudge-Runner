#include <stdio.h>

int main(void)
{
	int i, j, k, n; 
	long long a[5000], max, sum;
	
	while (scanf("%d", &n), n != 0){
		for (i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		max = -858993460;
		
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
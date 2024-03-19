#include <stdio.h>
#include <limits.h>

int main(void)
{
	int array[5000], n, i, j, sum, max;
	
	while (1){
		scanf("%d", &n);
		
		if (n == 0){
			break;
		}
		
		max = INT_MIN;
		
		for (i = 0; i < n; i++){
			scanf("%d", &array[i]);
		}
		
		for (i = 0; i < n; i++){
			sum = 0;
			for (j = i; j < n; j++){
				sum += array[j];
				
				if (max < sum){
					max = sum;
				}
			}
		}
		
		printf("%d\n", max);
	}
	
	return (0);
}
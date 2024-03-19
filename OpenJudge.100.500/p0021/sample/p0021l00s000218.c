#include <stdio.h>

#define MAX_VALUES 5000

int main(void) 
{
	int n;
	int sum, max, value[MAX_VALUES];
	int i, j;

	while (scanf("%d", &n), n != 0) {
		sum = 0;
		max = 0;
		
		for (i = 0; i < MAX_VALUES; i++) 
			value[i] = 0;

		for (i = 0; i < n; i++) 
			scanf("%d", &value[i]);

		for (i = 0; i < n; i++) {
			sum = value[i];
			for (j = i + 1; j < n; j++) {
				sum += value[j];
				if (max < sum) 
					max = sum;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
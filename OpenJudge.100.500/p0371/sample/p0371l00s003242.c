#include <stdio.h>

int main(void) {

	int n,i;
	int min = 1000000;
	int max = -1000000;
	long long int sum = 0;
	int a[10000];
	
	scanf("%d\n",&n);

	for (i = 0; i < n; i++) {
		scanf("%d ", &a[i]);

		sum += a[i];

		if (min > a[i]) {
			min = a[i];
		}

		if (max < a[i]) {
			max = a[i];
		}
		
	}

	printf("%d %d %lld\n", min, max, sum);
	
	return(0);

}

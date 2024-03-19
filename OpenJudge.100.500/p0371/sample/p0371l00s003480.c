#include <stdio.h>

int main(void){

	int n;
	long x[100000];
	int i;
	long max, min, sum;

	scanf("%d", &n);
	scanf("%d",&x[0]);
	max = x[0];
	min = x[0];
	sum = x[0];

	for (i = 1; i < n; i++){

		scanf("%ld", &x[i]);

		if (max < x[i]){
			max = x[i];
		}

		if (x[i] < min){
			min = x[i];
		}

		sum += x[i];
	}

	printf("%ld %ld %ld\n", min, max, sum);

	return 0;
}
#include <stdio.h>
int main(void)
{
	int n, i, num, min, max;
	long int sum;

	scanf("%d", &n);

	scanf("%d", &num);
	min = max = sum = num;
	for (i=1; i<n; i++){
		scanf("%d", &num);
		if (num > max) max = num;
		if (num < min) min = num;
		sum += num;
	}
	
	printf("%d %d %d\n", min, max, sum);

	return 0;
}

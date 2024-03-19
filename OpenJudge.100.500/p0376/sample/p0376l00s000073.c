#include <stdio.h>

int main(void)
{
	int n, i, num_i;

	scanf("%d", &n);

	int nums[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &num_i);
		nums[i] = num_i;
	}

	for (i = n - 1; i > 0; i--) {
		printf("%d ", nums[i]);
	}

	printf("%d\n", nums[0]);

	return 0;
}
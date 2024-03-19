#include <stdio.h>

int main(void) {
	int n = 0;

	scanf("%d", &n);

	int tmp = n * n;
	int result = tmp + tmp * n + n;

	printf("%d", result);

	return 0;
}
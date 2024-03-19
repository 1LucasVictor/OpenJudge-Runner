#include <stdio.h>

int main() {
	int a, b, k;

	scanf("%d%d", &a, &b);
	for (k = 1; k * a - k + 1 < b; k++)
		;
	printf("%d\n", k);
	return 0;
}

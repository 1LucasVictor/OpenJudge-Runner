#include <stdio.h>

int main() {
	int d, n;

	scanf("%d%d", &d, &n);
	printf("%d\n", n * (d == 0 ? 1 : d == 1 ? 100 : 10000));
	return 0;
}

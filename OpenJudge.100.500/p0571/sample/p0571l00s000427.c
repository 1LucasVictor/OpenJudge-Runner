#include <stdio.h>

int main(void) {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	a *= n;
	printf("%d\n", a < b ? a : b);
}

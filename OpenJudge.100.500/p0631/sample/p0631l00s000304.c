#include <stdio.h>

int main(void) {
	int a, b, x;

	scanf("%d %d %d", &a, &b, &x);

	puts(a <= x && x <= a + b ? "YES" : "NO");

	return 0;
}

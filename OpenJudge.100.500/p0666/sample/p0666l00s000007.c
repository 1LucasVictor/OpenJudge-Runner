#include <stdio.h>

int main() {
	int x, a, b;

	scanf("%d%d%d", &x, &a, &b);
	printf(b <= a ? "delicious\n" : b - a <= x ? "safe\n" : "dangerous\n");
	return 0;
}

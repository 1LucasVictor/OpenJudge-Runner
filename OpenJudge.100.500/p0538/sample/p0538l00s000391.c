#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", a <= 9 && b <= 9 ? a * b : -1);
	return 0;
}

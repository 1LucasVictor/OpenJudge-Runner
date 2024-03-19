#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int result = (a > 9 && a < 1) || (b > 9 && b < 1) ? -1 : a * b;
	printf("%d", result);
}
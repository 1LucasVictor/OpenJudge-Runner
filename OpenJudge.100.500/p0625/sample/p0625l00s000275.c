#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf(a > 8 || b > 8 ? ":(\n" : "Yay!\n");

	return 0;
}
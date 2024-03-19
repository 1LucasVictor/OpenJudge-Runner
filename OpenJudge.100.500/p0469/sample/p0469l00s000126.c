#include <stdio.h>

int main() {
	int k, a, b;
	scanf("%d %d %d", &k, &a, &b);
	printf(--a/k != b/k ? "OK" : "NG");
	return 0;
}
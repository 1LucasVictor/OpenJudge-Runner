#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int u500 = x / 500 * 1000;
	int u5 = (x % 500) / 5 * 5;
	printf("%d\n", u500 + u5);
	return 0;
}

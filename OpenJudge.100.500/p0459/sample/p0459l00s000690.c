#include <stdio.h>

int main(void) {
	int x, y;
	scanf("%d%d", &x, &y);

	int b = (y - 2*x)/2;
	int a = x-b;

	if (a<0 || b<0 || a+b != x || 2*a + 4*b != y) {
		puts("No");
		return 0;
	}

	puts("Yes");
}

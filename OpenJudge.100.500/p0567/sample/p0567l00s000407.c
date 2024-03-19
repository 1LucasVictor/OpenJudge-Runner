#include <stdio.h>

int main() {
	int a, b, c, r;
	scanf("%d %d %d", &a, &b, &c);
	r = c - (a - b);
	if (r < 0) {
		r = 0;
	}
	printf("%d\n", r);
	return 0;
}

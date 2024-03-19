#include <stdio.h>
int main(void) {
	int n, a, b, c;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	c = a * n;
	if (c > b) {
		printf("%d", b);
	}
	else {
		printf("%d", c);
	}
	return 0;
}
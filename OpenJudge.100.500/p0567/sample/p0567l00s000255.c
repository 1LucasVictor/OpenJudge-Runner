#include<stdio.h>
int main() {
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	a -= b;
	c -= a;
	if (c < 0) {
		c = 0;
	}
	printf("%d\n", c);
	return 0;
}


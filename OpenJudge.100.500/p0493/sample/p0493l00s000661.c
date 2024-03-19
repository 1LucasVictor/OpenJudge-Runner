#include <stdio.h>

int main(void) {
	int x, y, u;
	scanf("%d", &x);
	u = (x / 500) * 1000;
	y = x - (x / 500) * 500;
	u = u + (y / 5) * 5;
	printf("%d", u);
	return 0;
}

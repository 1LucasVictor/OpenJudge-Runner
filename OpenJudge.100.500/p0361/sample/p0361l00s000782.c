#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int h = a / 60 / 60;
	int m = (a - h * 60 * 60) / 60;
	int s = (a - h * 3600) - (m * 60);
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}


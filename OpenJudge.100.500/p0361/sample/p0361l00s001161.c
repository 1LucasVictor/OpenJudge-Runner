#include <stdio.h>

int main(void) {
	int a;
	int h, m, s;

	do {
		scanf("%d", &a);
	} while (a < 0 || a > 86400);

	h = a / 3600;
	m = (a % 3600) / 60;
	s = (a % 60) % 60;

	printf("%d:%d:%d\n", h, m, s);
}
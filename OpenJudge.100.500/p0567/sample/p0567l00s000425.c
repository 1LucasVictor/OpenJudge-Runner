#include<stdio.h>
int main(void) {
	int a, b, c, s, x;
	x = 0;
	s = 0;
	scanf("%d%d%d", &a, &b, &c);
	s = a - b;
	if (s > 0) {
		if (s - c > 0) {
			printf("%d", 0);
		}
		else {
			x = c - s;
			printf("%d", x);
		}
	}
	else
		printf("%d", c);
	return 0;
}
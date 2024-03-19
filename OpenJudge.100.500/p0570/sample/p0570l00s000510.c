#include <stdio.h>
int main(void) {
	int a, b, c, k;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b) {
		c = a - b;
	}
	else {
		c = b - a;
	}
	if (c % 2 == 0) {
		if (a > b) {
			k = c / 2;
			k = a - k;
		}
		else {
			k = c / 2;
			k = b - k;
		}
		printf("%d\n", k);
	}
	else {
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
#include <stdio.h>
int main(void) {
	int a, b, t, n;
	scanf("%d %d %d", &a, &b, &t);
	if (a < t) {
		for (int i = a; i < t; i=i+a) {
			n += b;
		}
	}
	else {
		n = 0;
	}
	printf("%d", n);
	return 0;
}
#include <stdio.h>

int main() {

	int a, b, c, d, e, f;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b) {
		d = a;
		e = b;
	}else {
		d = b;
		e = a;
	}

	if (c < d) {
		printf("%d %d %d\n", c, d, e);
	}else if (e < c) {
		printf("%d %d %d\n", d, e, c);
	}else {
		printf("%d %d %d\n", d, c, e);
	}

	return 0;
}

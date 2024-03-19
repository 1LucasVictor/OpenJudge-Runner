#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, d;
	while (scanf(" %d %d", &a, &b) != EOF) {
		d = 1;
		for (c = a + b; c > 9; c /= 10)
			d++;
		printf("%d\n", d);
	}
	return 0;
}
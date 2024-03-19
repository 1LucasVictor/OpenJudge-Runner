#include <stdio.h>

int main(void) {
	int a, b, d;
	while (scanf("%d %d", &a, &b) != EOF) {
		d = 1;
		a += b;
		while ((a /= 10) > 0) d++;
		printf("%d\n", d);
	}
	
	return 0;
}
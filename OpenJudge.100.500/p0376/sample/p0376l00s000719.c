#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, i;
	int *c;
	scanf("%d", &b);
	c = (int *)calloc(b, sizeof(int));
	for (i = 0; i < b; ++i) {
		scanf("%d", &a);
		c[i] = a;
	}
	while (--b) {
		printf("%d ", c[b]);
	}
	printf("%d\n", c[0]);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define MIN(A,B) ((A) > (B) ? (B) : (A))

int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	i = abs(a - b);
	if (i % 2 != 0) {
		puts("IMPOSSIBLE");
		return 0;
	}
	printf("%d\n", MIN(a, b) + i / 2);
	return 0;
}

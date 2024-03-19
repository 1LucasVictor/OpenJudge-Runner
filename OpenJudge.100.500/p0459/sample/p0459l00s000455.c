#include <stdio.h>
#define T 2
#define K 4

int main(void) {
	int x, y;
	int i, j;

	scanf("%d", &x);
	scanf("%d", &y);

	for (i = 0; i <= x; i++) {
		if ((x-i)*T + i*K == y || i*T + (x-i)*K == y) {
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");



	return 0;
}
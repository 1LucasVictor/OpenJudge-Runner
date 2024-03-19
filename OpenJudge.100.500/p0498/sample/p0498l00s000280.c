#include <stdio.h>

int main(void) {
	int N;
	if (scanf("%d", &N) != 1) return 1;
	printf("%d\n", (N + 1) / 2);
	return 0;
}

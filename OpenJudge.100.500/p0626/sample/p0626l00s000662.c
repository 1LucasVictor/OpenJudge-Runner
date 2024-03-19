#include <stdio.h>

int main(void) {
	int D, N;
	int answer = 1;
	int i;
	if (scanf("%d%d", &D, &N) != 2) return 1;
	for (i = 0; i < D; i++) answer *= 100;
	printf("%d\n", (N == 100 ? 101 : N) * answer);
	return 0;
}

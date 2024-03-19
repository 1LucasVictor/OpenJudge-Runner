#include <stdio.h>

int main(void) {
	int A, B;
	int need, gain;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	need = B - 1;
	gain = A - 1;
	printf("%d\n", (need + gain - 1) / gain);
	return 0;
}

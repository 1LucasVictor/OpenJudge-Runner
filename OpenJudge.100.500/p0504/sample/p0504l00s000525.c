#include <stdio.h>

int main(void) {
	int H, A;
	if (scanf("%d%d", &H, &A) != 2) return 1;
	printf("%d\n", (H + A - 1) / A);
	return 0;
}

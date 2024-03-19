#include <stdio.h>

int main(void) {
	int A, B;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	puts(A <= 8 && B <= 8 ? "Yay!" : ":(");
	return 0;
}

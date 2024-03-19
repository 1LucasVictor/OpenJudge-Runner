#include <stdio.h>

int main(void) {
	int A, B, X;
	if (scanf("%d%d%d", &A, &B, &X) != 3) return 1;
	puts(A <= X && X <= A + B ? "YES" : "NO");
	return 0;
}

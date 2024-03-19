#include <stdio.h>

int main(void) {
	int A, B;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	if (A > B) {
		int t = A; A = B; B = t;
	}
	if ((B - A) % 2 != 0) {
		puts("IMPOSSIBLE");
	} else {
		printf("%d\n", A + (B - A) / 2);
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int A, B;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	printf("%d\n", B % A == 0 ? A + B : B - A);
	return 0;
}

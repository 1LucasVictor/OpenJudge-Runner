#include <stdio.h>

int main(void) {
	int A, B, C;
	int tomatuharuka;
	if (scanf("%d%d%d", &A, &B, &C) != 3) return 1;
	tomatuharuka = C - (A - B);
	if (tomatuharuka < 0) tomatuharuka = 0;
	printf("%d\n", tomatuharuka);
	return 0;
}

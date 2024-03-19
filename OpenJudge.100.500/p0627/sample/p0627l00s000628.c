#include <stdio.h>

int main(void) {
	int A, B;
	int asumikana;
	if (scanf("%d%d", &A, &B) != 2) return 1;
	asumikana = A + B;
	if (A - B > asumikana) asumikana = A - B;
	if (A * B > asumikana) asumikana = A * B;
	printf("%d\n", asumikana);
	return 0;
}

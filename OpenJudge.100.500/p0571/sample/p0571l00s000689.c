#include <stdio.h>

int main () {
	int N, A, B;
	scanf ("%d %d %d", &N, &A, &B);
	printf ("%d\n", (A*N>B)?B:A*N);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int c(const void* x, const void* y) {
	int a = *(const int*)x, b = *(const int*)y;
	return a < b ? -1 : a > b;
}

int N;
int A[333333];

int main(void) {
	int i;
	if (scanf("%d", &N) != 1) return 1;
	for (i = 0; i < N; i++) {
		if (scanf("%d", &A[i]) != 1) return 1;
	}
	qsort(A, N, sizeof(*A), c);
	for (i = 1; i < N; i++) {
		if (A[i - 1] == A[i]) {
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}

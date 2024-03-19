#include <stdio.h>

int main() {
	int N, A[200010] = {0}, t;
	scanf("%d", &N);
	for (int i = 1; i < N; i++) {
		scanf("%d", &t);
		A[t]++;
	}
	for (int i = 1; i <= N; i++) printf("%d\n", A[i]);
	return 0;
}
#include <stdio.h>

int main() {
	int N, A[200000], i = 0;
	scanf("%d", &N);
	while (i < N) {
		scanf("%d", &A[i]);
		i++;
	}
	for (int s = 0; s < N - 1;s++) {
		for (int t = s + 1; t < N; t++) {
			if (A[s]==A[t]) {
				goto L;
			}
		}
	}
	printf("YES");
	goto M;
	L:printf("NO");
	M:
	return 0;
}
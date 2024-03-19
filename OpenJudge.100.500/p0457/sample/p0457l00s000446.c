#include <stdio.h>
#include <stdlib.h>

int get_max_books(long *A, long *B, int i, int N,  int j, int M, long remain)
{
	if (remain <= 0)
		return 0;

	if (i > N && j > N)
		return 0;

	int ans_b = 0; // bを読む場合の答え
	int ans_a = 0; // aを読む場合の答え
	if (i > N) {
		if (B[j] <= remain) {
			return 1 + get_max_books(A, B, i, N, j + 1, M, remain - B[j]);
		}
		return 0;
	}
	if (j > M) {
		if (A[i] <= remain) {
			return 1 + get_max_books(A, B, i + 1, N, j, M, remain - A[i]);
		}
		return 0;
	}
	if (A[i] > remain && B[j] > remain)
		return 0;
	// Aを読むパターン
	if (A[i] <= remain)
		ans_a = 1 + get_max_books(A, B, i + 1, N, j, M, remain - A[i]);
	// Bを読むパターン
	if (B[i] <= remain)
		ans_b = 1 + get_max_books(A, B, i, N, j + 1, M, remain - B[j]);
	return (ans_a > ans_b) ? ans_a : ans_b;
}

int main()
{
	long N, M, K;
	scanf("%ld", &N);
	scanf("%ld", &M);
	scanf("%ld", &K);
	long *A = malloc((1 + N) * sizeof(long));
	long *B = malloc((1 + M) * sizeof(long));
	for (int i = 1; i <= N; i++) {
		scanf("%ld", &A[i]);
	}
	for (int i = 1; i <= M; i++) {
		scanf("%ld", &B[i]);
	}
	long remain = K;
	int i = 1; // For A
	int j = 1; // For B
	int ans = get_max_books(A, B, i, N, j, M, remain);
	printf("%d\n", ans);

	return 0;
}

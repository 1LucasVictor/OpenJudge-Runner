#include <stdio.h>
#include <stdlib.h>

int get_max_books(long *A, long *B, int i, int N,  int j, int M, long remain, int **DP)
{
	if (remain <= 0)
		return DP[i][j] = 0;

	if (i > N && j > M)
		return DP[i][j] = 0;

	if (DP[i][j] != -1)
		return DP[i][j];
	int ans_b = 0; // bを読む場合の答え
	int ans_a = 0; // aを読む場合の答え
	if (i > N) {
		if (B[j] <= remain) {
			DP[i][j] = 1 + get_max_books(A, B, i, N, j + 1, M, remain - B[j], DP);
			return DP[i][j];
		}
		DP[i][j] = 0;
		return DP[i][j];
	}
	if (j > M) {
		if (A[i] <= remain)
		{
			DP[i][j] = 1 + get_max_books(A, B, i + 1, N, j, M, remain - A[i], DP);
			return DP[i][j];
		}
		DP[i][j] = 0;
		return DP[i][j];
	}
	if (A[i] > remain && B[j] > remain)
	{
		DP[i][j] = 0;
		return DP[i][j];
	}
	// Aを読むパターン
	if (A[i] <= remain)
		ans_a = 1 + get_max_books(A, B, i + 1, N, j, M, remain - A[i], DP);
	// Bを読むパターン
	if (B[i] <= remain)
		ans_b = 1 + get_max_books(A, B, i, N, j + 1, M, remain - B[j], DP);
	DP[i][j] = (ans_a > ans_b) ? ans_a : ans_b;
	return DP[i][j];
}

int main()
{
	long N, M, K;
	scanf("%ld", &N);
	scanf("%ld", &M);
	scanf("%ld", &K);
	int **DP;
	long *A = malloc((1 + N) * sizeof(long));
	long *B = malloc((1 + M) * sizeof(long));
	for (int i = 1; i <= N; i++) {
		scanf("%ld", &A[i]);
	}
	for (int i = 1; i <= M; i++) {
		scanf("%ld", &B[i]);
	}
	DP = calloc(2 + N, sizeof(int*));
	for (int i = 1; i <= N + 1; i++)
	{
		DP[i] = calloc(2 + M, sizeof(int));
		for (int j = 1; j <= M + 1; j++) {
			DP[i][j] = -1;
		}
	}
	long remain = K;
	int i = 1; // For A
	int j = 1; // For B
	int ans = get_max_books(A, B, i, N, j, M, remain, DP);
	printf("%d\n", ans);

	return 0;
}

#include <stdio.h>

int main()
{
	int i, N, M, A[200001], B[200001];
	long long K;
	scanf("%d %d %lld", &N, &M, &K);
	for (i = 1; i <= N; i++) scanf("%d", &(A[i]));
	for (i = 1; i <= M; i++) scanf("%d", &(B[i]));
	
	int j, max = 0;
	long long sum = 0;
	for (i = 1; i <= N; i++) sum += A[i];
	for (i = N, j = 0; i >= 0; sum -= A[i--]) {
		for (; j < M && sum + B[j+1] <= K; sum += B[++j]);
		if (sum <= K && i + j > max) max = i + j;
	}
	printf("%d\n", max);
	fflush(stdout);
	return 0;
}
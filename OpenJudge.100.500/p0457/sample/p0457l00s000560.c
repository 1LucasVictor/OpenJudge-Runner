#include <stdio.h>
#include <stdlib.h>

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
	long ans = 0;

	while (i <= N || j <= M) {
		if (remain <= 0)
			break;
		if (i > N) {
			if (B[j] <= remain) {
				remain -= B[j];
				j++;
				ans++;
				continue;
			}
			break;
		}
		if (j > M) {
			if (A[i] <= remain) {
				remain -= A[i];
				i++;
				ans++;
				continue;
			}
			break;
		}
		if (A[i] <= B[j] && A[i] <= remain) {
			remain -= A[i];
			i++;
			ans++;
			continue;
		} else if (A[i] > B[j] && B[j] <= remain) {
			remain -= B[j];
			j++;
			ans++;
			continue;
		}
		break;
	}
	printf("%ld\n", ans);

	return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
	int N, i, count = 0;
	char S[100000];

	scanf("%s", S);

	N = strlen(S);
	for (i = 1; i < N; i++) {
		if (S[i - 1] != S[i]) {
			count = count + 2;
			N = N - 2;
			if (N <= 1) break;
			S[i - 1] = '\0';
			strcat(S, &S[i + 1]);
			i = 0;
		}
	}

	printf("%d", count);

	return 0;
}
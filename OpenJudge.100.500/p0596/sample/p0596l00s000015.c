#include <stdio.h>
#include <string.h>

int main() {
	int N, i, count = 0;
	char S[100000];

	scanf("%s", S);

	N = strlen(S);
	for (i = 0; i < N - 1; i++) {
		if (S[i] != S[i + 1]) {
			count = count + 2;
			N = N - 2;
			if (N <= 1) break;
			S[i] = '\0';
			strcat(S, &S[i + 2]);
			if (i == 0) { i--; }
			else { i = i - 2; }
		}
	}

	printf("%d", count);

	return 0;
}
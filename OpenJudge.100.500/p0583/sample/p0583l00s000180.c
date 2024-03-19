#include <stdio.h>

int main(void) {
	int N, A, B, C, D;
	int i;
    char S[200005];
	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);

	for (i = 0;i < N;i++) {
		scanf("%c", &S[i]);
	}

	if (C < D) {
		for (i = A-1;i <= C-3;i++) {
			if (S[i] == '#'&& S[i+1]=='#'){
				printf("No\n");
                return 0;
			}
		}

		for (i = B-1;i <= D - 3;i++) {
			if (S[i] == '#' && S[i + 1] == '#') {
				printf("No\n");
                return 0;
			}
		}
	    printf("Yes\n");
		return 0;
	}
	else {
		for (i = A-1;i <= C - 3;i++) {
			if (S[i] == '#' && S[i + 1] == '#') {
				printf("No\n");
                return 0;
			}
		}
		for (i = B - 2;i <= D - 2;i++) {
			if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') {
				printf("Yes\n");
                return 0;
			}
		}
		printf("No\n");
	}
	return 0;
}
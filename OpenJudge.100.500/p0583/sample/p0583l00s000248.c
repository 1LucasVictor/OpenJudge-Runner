#include <stdio.h>

int N, A, B, C, D;
char S[271828];

int main(void) {
	int i;
	if (scanf("%d%d%d%d%d", &N, &A, &B, &C, &D) != 5) return 1;
	if (scanf("%271827s", S) != 1) return 1;
	if (A >= B) {
		puts("error!");
		return 2;
	}
	A--; B--; C--; D--;
	if (C == D || S[C] != '.' || S[D] != '.') {
		puts("No");
	} else if (C < D) {
		/* 追い越さなくていいパターン */
		for (i = A; i < C; i++) {
			if (S[i] != '.' && S[i + 1] != '.') {
				puts("No");
				return 0;
			}
		}
		for (i = B; i < D; i++) {
			if (S[i] != '.' && S[i + 1] != '.') {
				puts("No");
				return 0;
			}
		}
	} else {
		/* 追い越すパターン */
		int ok = 0;
		for (i = A; i < C; i++) {
			if (S[i] != '.' && S[i + 1] != '.') {
				puts("No");
				return 0;
			}
		}
		for (i = B - 1; i < D; i++) {
			if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') {
				ok = 1;
				break;
			}
		}
		if (!ok) {
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
}

#include <stdio.h>

int main(void) {
	int N, A, B, C, D;
	int i;
	int count1 = 0;
	int count2 = 0;

	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);

	char masu[N];

	for (i = 0;i < N;i++) {
		scanf("%s", &masu[i]);
	}

	if (C < D) {
		for (i = A-1;i <= C-3;i++) {
			if (masu[i] == '#'&& masu[i+1]=='#'){
				printf("No\n");
                return 0;
			}
		}

		for (i = B-1;i <= D - 3;i++) {
			if (masu[i] == '#' && masu[i + 1] == '#') {
				printf("No\n");
                return 0;
			}
		}
	    printf("Yes\n");
		return 0;
	}
	else {
		for (i = A-1;i <= C - 3;i++) {
			if (masu[i] == '#' && masu[i + 1] == '#') {
				printf("No\n");
                return 0;
			}
		}
		for (i = B - 2;i <= D - 2;i++) {
			if (masu[i] == '.' && masu[i + 1] == '.' && masu[i + 2] == '.') {
				printf("Yes\n");
                return 0;
			}
		}
		printf("No\n");
	}
	return 0;
}
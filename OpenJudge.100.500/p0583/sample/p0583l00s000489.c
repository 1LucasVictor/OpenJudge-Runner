#include <stdio.h>

int main(void) {
	int N, A, B, C, D;
	int i;
	int count1 = 0;
	int count2 = 0;

	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);

	char masu[N];

	for (i = 1;i <= N;i++) {
		scanf("%c", &masu[i]);
	}

	if (C < D) {
		for (i = A+1;i <= C-2;i++) {
			if (masu[i] == '#'&& masu[i+1]=='#'){
				count1++;
			}
		}

		for (i = B+1;i <= D - 2;i++) {
			if (masu[i] == '#' && masu[i + 1] == '#') {
				count1++;
			}
		}

		if (count1 == 0) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	else {
		for (i = A+1;i <= C - 2;i++) {
			if (masu[i] == '#' && masu[i + 1] == '#') {
				count1++;
			}
		}
		for (i = B - 1;i <= D - 1;i++) {
			if (masu[i] == '.' && masu[i + 1] == '.' && masu[i + 2] == '.') {
				count2++;
			}
		}
		if (count1==0 && count2 > 0) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}

	return 0;

}
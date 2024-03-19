#include <stdio.h>

int main(void) {
	int N, A, B, C, D;
	int i;
	int count1 = 0;
	int count2 = 0;

	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);

	char masu[200001];

	
	scanf("%s", masu);
	

	if (C < D) {
		for (i = A;i <= C-3;i++) {
			if (masu[i] == '#'&& masu[i+1]=='#'){
				count1++;
			}
		}

		for (i = B;i <= D - 3;i++) {
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
		for (i = A;i <= C - 3;i++) {
			if (masu[i] == '#' && masu[i + 1] == '#') {
				count1++;
			}
		}
		for (i = B - 2;i <= D - 2;i++) {
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
//#include <stdio.h>
/*a
int main() {
	int N = 0;
	scanf("%d", &N);
	if (N % 2 == 0) {
		printf("%d\n", (N / 2));
	}
	else {
		printf("%d\n", ((N + 1) / 2));
	}

	return 0;
}
*/

/*b
int main() {
	int flag = 0;
	int card[3][3] = { 0 };
	int A[3][3] = { 0 };
	int N = 0;
	int b[100] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) scanf("%d", &A[i][j]);
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &b[i]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 9; j++) {
			if (b[i] == A[j/3][j%3]) card[j / 3][j % 3] = 1;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if ((card[i][0] == 1) && (card[i][1] == 1) && (card[i][2] == 1)) {
			flag = 1;
		}
		if ((card[0][i] == 1) && (card[1][i] == 1) && (card[2][i] == 1)) {
			flag = 1;
		}
		if (flag == 1) break;
	}
	if ((card[0][0] == 1) && (card[1][1] == 1) && (card[2][2] == 1)) flag = 1;
	if ((card[0][2] == 1) && (card[1][1] == 1) && (card[2][0] == 1)) flag = 1;
	if (flag == 1) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}
*/

#include <stdio.h>

int main() {
	int N = 0;
	int M = 0;
	int s[6] = { 0 };
	int c[6] = { 0 };
	int ans[3] = { 0 };
	int ans_num = 0;
	int count[3] = { 0 };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) scanf("%d %d", &s[i], &c[i]);
	for (int i = 0; i < M; i++) {
		if (count[s[i] - 1] == 0) {
			ans[s[i] - 1] = c[i];
			count[s[i] - 1]++;
		}
		else {
			if (ans[s[i] - 1] != c[i]) {
				printf("-1\n");
				return 0;
			}
		}
	}
	ans_num = ans[0] * 100 + ans[1] * 10 + ans[2];
	if (N == 1) {
		if ((ans_num < 10)&&(ans_num>=0)) {
			printf("%d\n", ans_num);
		}
		else {
			printf("-1\n");
		}
	}
	else if (N == 2) {
		if ((ans_num < 100) && (ans_num >= 10)) {
			printf("%d\n", ans_num);
		}
		else {
			printf("-1\n");
		}
	}
	else if (N == 3) {
		if ((ans_num < 1000) && (ans_num >= 100)) {
			printf("%d\n", ans_num);
		}
		else {
			printf("-1\n");
		}
	}
	return 0;
}
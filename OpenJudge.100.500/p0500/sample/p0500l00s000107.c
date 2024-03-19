#include <stdio.h>

int main() {
	int N = 0;
	int M = 0;
	int s[6] = { 0 };
	int c[6] = { 0 };
	int ans[3] = { 0 };
	int ans_num = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) scanf("%d %d", &s[i], &c[i]);
	for (int i = 0; i < M; i++) {
		if ((ans[s[i]-1] == 0)||(ans[s[i]-1]==c[i])) {
			ans[s[i]-1] = c[i];
		}
		else {
			printf("-1\n");
			return 0;
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
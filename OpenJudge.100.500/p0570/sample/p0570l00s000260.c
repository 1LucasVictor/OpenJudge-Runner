#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 0 || b == 0) {
		printf("IMPOSSIBLE\n");
		return 0;
	}
	int ans = 0;

	ans = a - b;

	if (ans < 0) {
		ans = -1 * ans;
	}
	ans = ans / 2;
	//printf("%d\n", ans);
	int ans1;
	int ans2;
	ans1 = ans + a;
	ans2 = ans + b;
	//printf("%d\n", ans1);
	int hako1, hako2;

	hako1 = a - ans1;
	hako2 = b - ans1;
	if (hako1 < 0) {
		hako1 = -1 * hako1;
	}
	if (hako2 < 0) {
		hako2 = -1 * hako2;
	}
	//printf("%d %d\n", hako1, hako2);

	if (hako1 == hako2) {
		printf("%d\n", ans1);
		return 0;
	}
	ans1 = ans + a;
	ans2 = ans + b;



	hako1 = a - ans2;
	hako2 = b - ans2;
	if (hako1 < 0) {
		hako1 = -1 * hako1;
	}
	if (hako2 < 0) {
		hako2 = -1 * hako2;
	}

	if (hako1 == hako2) {
		printf("%d\n", ans2);
		return 0;
	}
	else {
		printf("IMPOSSIBLE\n");
		return 0;
	}
}

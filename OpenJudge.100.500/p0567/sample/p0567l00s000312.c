#include <stdio.h>
int main(void) {
	int a, b, c, ans;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	a = a - b;
	ans = c - a;
	if (ans > 0) {
		printf("%d", ans);
	}
	else {
		printf("0");
	}
	return 0;
}
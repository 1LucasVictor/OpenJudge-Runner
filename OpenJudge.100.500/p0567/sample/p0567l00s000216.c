#include<stdio.h>
int main(void) {
	int a, b, c;
	int ans;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	ans = c - (a - b);

	if (ans > 0) {
		printf("%d", ans);
	}
	else {
		printf("0");
	}
	return 0;
}
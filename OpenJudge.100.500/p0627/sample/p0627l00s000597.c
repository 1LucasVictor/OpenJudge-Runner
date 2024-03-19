#include <stdio.h>

int main() {
	int a, b,ans;

	scanf("%d %d %d %d", &a, &b);

	ans = a + b;

	if (a - b > ans) {
		ans = a - b;
	}

	if (a*b > ans) {
		ans = a*b;
	}

	printf("%d",ans);
	
	return 0;
}
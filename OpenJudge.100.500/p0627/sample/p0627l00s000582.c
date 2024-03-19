#include <stdio.h>

int main(void)
{
	int a, b, c;
	int ans1, ans2, ans3, ans;
	scanf("%d %d %d", &a, &b, &c);
	ans1 = a + b;
	ans2 = a - b;
	ans3 = a * b;
	if(ans1 > ans2) {
		ans = ans1;
	} else {
		ans = ans2;
	}
	if(ans3 > ans) {
		ans = ans3;
	}
	printf("%d\n", ans);
}


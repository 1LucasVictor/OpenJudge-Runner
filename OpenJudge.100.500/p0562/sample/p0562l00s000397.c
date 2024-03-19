#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = a;
	int cnt = 1;
	while (1) {
		if (ans >= b) {
			break;
		}
		else {
			ans += a - 1;
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
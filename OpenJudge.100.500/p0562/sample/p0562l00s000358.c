#include <stdio.h>

int main() {
	int a, b, sockets, ans;

	scanf("%d%d", &a, &b);
	sockets = 1;
	ans = 0;
	while (sockets < b) {
		sockets += a - 1;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}

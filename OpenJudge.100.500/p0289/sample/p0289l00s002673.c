#include <stdio.h>
int main() {
	int x, y, ans;
	int d = 1;
	scanf("%d %d", &x, &y);

	while (d<=x || d<=y) {
		if (x%d==0 && y%d==0) {
			ans = d;
		}
		d++;
	}
	printf("%d\n", ans);
	return 0;
}
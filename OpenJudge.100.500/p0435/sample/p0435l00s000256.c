#include <stdio.h>
typedef long long ll;
int main() {
	int n, d;
	scanf("%d%d", &n, &d);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		if ((ll)x * x + (ll)y * y <= (ll)d * d) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
#include <stdio.h>
int main() {
	long long N, D;
	scanf("%lld %lld", &N, &D);
	int ans;
	ans = 0;
	for (int i = 0; i<N; i++) {
		long long x, y;
		scanf("%lld %lld", &x, &y);
		if (D*D >= x*x + y*y) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
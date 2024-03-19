#include <stdio.h>
typedef long long ll;
int main() {
	ll a;
	int d = 1;
	ll ans = 0;
	char b[5];
	scanf("%lld%s", &a, b);
	int nb[3];
	nb[0] = b[3] - '0';
	nb[1] = b[2] - '0';
	nb[2] = b[0] - '0';
	for (int i = 0; i < 3; i++) {
		ans += nb[i] * a * d;
		d *= 10;
	}
	printf("%lld\n", ans / 100);
	return 0;
}
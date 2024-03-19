// ABC 160-B
// 2020.3.28 bal4u

#include <stdio.h>

typedef long long ll;

int main()
{
	int X;
	ll ans;

	scanf("%d", &X);
	ans = (ll)1000 * (X/500);
	X %= 500;
	ans += 5* (X/5);
	printf("%lld\n", ans);
	return 0;
}

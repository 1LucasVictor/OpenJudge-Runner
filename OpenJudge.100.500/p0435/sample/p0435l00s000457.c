#include <stdio.h>

int main(void)
{
	long long n, d, x, y;
	long long i, ans = 0;

	scanf("%lld%lld", &n, &d);
	d *= d;

	for (i = 0; i < n; i++)
	{
		scanf("%lld%lld", &x, &y);
		if ((x*x + y*y) <= d) ans++;
	}

	printf("%lld\n", ans);

	return 0;
}

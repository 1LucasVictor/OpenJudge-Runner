#include<stdio.h>
int main()
{
	long long int n, d;
	scanf("%lld %lld", &n, &d);
	long long int i;
	long long int x, y;
	long long int ans = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lld %lld", &x, &y);
		if (x * x + y * y <= d * d)
			ans++;
	}
	printf("%lld\n", ans);
	return 0;
}
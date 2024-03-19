#include<stdio.h>
int main()
{
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	if (n % k > k - n % k)
		printf("%lld\n", k - n % k);
	else
		printf("%lld\n", n % k);
	return 0;
}
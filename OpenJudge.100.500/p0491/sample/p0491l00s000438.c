#include<stdio.h>

int main()
{
	long long n,k;
	scanf("%lld %lld", &n, &k);

		n = n%k;
		long long temp = n-k;
		if(temp<0) temp *= -1;
		if(temp<n) printf("%lld\n", temp);
		else printf("%lld\n", n);

}
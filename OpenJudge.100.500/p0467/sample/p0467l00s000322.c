#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long int64;

int main()
{
	int64 a, b, c, k;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
	int64 d = 0;
	
	if (k > a) 
	{
		d += a * 1;
		k -= a * 1;
	}
	else {
		d += k * 1;
		k -= k * 1;
	}
	if (k <= 0)
	{
		printf("%lld", d);
		exit(0);
	}
	k -= b;
	if (k <= 0) 
	{
		printf("%lld", d);
		exit(0);
	}
	else {
		d -= k * 1;
	}
	printf("%lld", d);

	

	return 0;
}
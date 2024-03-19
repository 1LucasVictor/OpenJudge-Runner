#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long int llint;

int main()
{
	llint n = 0, k = 0;
	llint val = 0, ret = 0;
	if (scanf("%lld %lld", &n, &k));
	if ((n == k) || (n == 0)) goto func;
	val = n % k;
	ret = k - val;
	val = (val < ret) ? val : ret;		

func:
	printf("%lld", val);

	return 0;

}
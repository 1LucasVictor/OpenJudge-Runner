#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long int llint;

llint mod_calc(llint n, llint k)
{
	llint val = n;
	llint mod = 0;

	while(1) {
		mod = val % k;
		if (mod != 0) break;
		if (val <= k) break;
		val = val / k;
	}

	return mod;
}

llint abs_calc_mul(llint val1, llint val2)
{
	return (val1 > val2)? (val1 - val2) : (val2 - val1);
}

int main()
{
	llint n = 0, k = 0;
	llint val = 0, ret = 0;
	if (scanf("%lld %lld", &n, &k));
	if (n == k) goto func;
	if (k == 1) goto func;

	if (n < k) {
		if (n == 0) {
			val = k;
			goto func;
		}
		val = abs_calc_mul(n, k);
		ret = abs_calc_mul(val, k);
		val = (val < ret) ? val : ret;
	} else {
		val = mod_calc(n, k);
//		if (val == 0) goto func;
		ret = abs_calc_mul(val, k);
		val = (val < ret) ? val : ret;		
	} 

func:
	printf("%lld", val);

	return 0;

}
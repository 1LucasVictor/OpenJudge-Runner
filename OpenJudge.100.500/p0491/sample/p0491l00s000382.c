#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long int llint;

llint abs_calc_div(llint val1, llint val2)
{
	return (val1 % val2)? (val1 / val2) : 0;
}

llint abs_calc_mul(llint val1, llint val2)
{
	return (val1 > val2)? (val1 - val2) : (val2 - val1);
}

int main()
{
	llint n,k;
	if (scanf("%lld %lld", &n, &k));

	llint val = 0;
	if (n == k) goto func;

	llint sub1, sub2;
	if (n < k) {
		if ((n == 1) || (k == 1)) {
			val =1;
		} else {
			sub1 = abs_calc_mul(n, k);
			sub2 = abs_calc_mul(sub1, k);
			val = (sub1 < sub2)? sub1 : sub2;
		}
	} else {
		if ((n != 1) && (k != 1)) {
			val = abs_calc_div(n, k);
			if (val == 0) goto func;
			if (val == 1) val = val * n;
			sub1 = abs_calc_mul(val, k);
			sub2 = abs_calc_mul(sub1, k);
			val = (sub1 < sub2)? sub1 : sub2;
		}
	} 
func:
	printf("%lld", val);

	return 0;

}
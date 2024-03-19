#include <stdio.h>
int main(void) {
	long long l, r, lmod, rmod, min, sec;
	scanf("%lld %lld", &l, &r);
	lmod = l % 2019;
	rmod = r % 2019;
	if (lmod >= rmod)
		rmod += 2019;
	min = 2019;
	sec = 2019;
	for (int i = rmod; i >= lmod; i--) {
		if (min > i % 2019) {
			sec = min;
			min = i % 2019;
		}
	}
	printf("%lld\n", (min * sec) % 2019);
	return 0;
}
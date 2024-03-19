#include <stdio.h>
#include <math.h>

void main() {
	long long d, n, num;
        d = 0;
        n = 0;
	if( scanf("%lld %lld", &d, &n) == 1);
	if (d == 0) {
		num = n;
	}
	else {
		num = n * pow(100, d);
	}
	
	printf("%lld\n", num);
}

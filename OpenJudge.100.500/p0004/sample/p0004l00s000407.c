#include<stdio.h>

long long calcgcd(long long x, long long y) {
	long long tmp;
	while (1) {
		tmp = y;
		y = x%y;
		x = tmp;
		if (y == 0) break;
	}
	return x;
}

int main() {
	long long a, b, gcd, lcm;
	while (scanf("%lld %lld", &a, &b) != EOF) {
		if (a > b) {
			gcd = calcgcd(a, b);
		}
		else {
			gcd = calcgcd(b, a);
		}
		lcm = a*b / gcd;
		printf("%lld %lld\n", gcd, lcm);
	}
	return 0;
}
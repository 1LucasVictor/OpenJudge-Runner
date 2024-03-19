/*
adrui's submission
Language : C++
Result : Accepted
Love : ll
Favorite : Dragon Balls

Standing in the Hall of Fame
*/

#include<stdio.h>
#include<string.h>
typedef long long LL;

LL gcd(LL a, LL b) {
	while (b) {
		LL tmp = b;
		b = a % b;
		a = tmp;
	}

	return a;
}
int main() {
	//freopen("in.txt", "r", stdin);
	LL a, b;
	while (scanf("%lld%lld", &a, &b) != EOF) {
		LL res = gcd(a, b);
		printf("%lld %lld\n", res, a / res * b);
	}
	return 0;
}
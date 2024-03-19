#include<stdio.h>
#include<string.h>

int main() {
	long long int a, b, c, k,ans=0;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
	if (k < a) {
		ans = k;
	}
	else {
		if (k <= a + b) {
			ans = a;
		}
		else {
			ans = a - (k - a - b);
		}
	}
	printf("%lld", ans);
}
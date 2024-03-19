#include<stdio.h>

int main() {
	long long  a,ans;
	double b;
	scanf("%lld %lf", &a, &b);
	ans =(long long) a * b*100/100;
	printf("%lld", ans);

	return 0;
}
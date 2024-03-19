#include <stdio.h>

int main(){
	unsigned long long a;
	double b;
	scanf("%llu%lf", &a, &b);
	unsigned long long ans = a * b + 1e-3;
	printf("%llu\n", ans);
}

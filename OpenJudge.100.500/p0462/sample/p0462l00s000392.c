#include <stdio.h>

int main(){
	unsigned long long a;
	double b;
	scanf("%llu%lf", &a, &b);
	double ans_double = (double)a * b + 5e-3;
	unsigned long long ans = ans_double;
	printf("%llu\n", ans);
}

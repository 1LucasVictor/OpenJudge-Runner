#include <stdio.h>

int main(){
	unsigned long long a;
	double b;
	scanf("%llu%lf", &a, &b);

	unsigned long long b_times_100 = b * 100;
	printf("%llu\n", a * b_times_100 / 100);
}

#include <stdio.h>

int main(void) {
	int n, i;
	unsigned long long int a;
	double b;


	scanf("%llu %lf", &a, &b);
	
	//printf("%lf\n", ans);
	printf("%llu\n", (unsigned long long int)(a*b));

	return 0;
}
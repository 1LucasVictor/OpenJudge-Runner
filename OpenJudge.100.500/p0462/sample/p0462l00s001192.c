#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long int a;
	double b;
	
	if (scanf("%lld", &a) < 0) {
		exit(1);
	}
	if (scanf("%lf", &b) < 0) {
		exit(1);
	}
	
	long long int c;
	c = (long long int)((double)a * b);
	printf("%lld\n", c);
}
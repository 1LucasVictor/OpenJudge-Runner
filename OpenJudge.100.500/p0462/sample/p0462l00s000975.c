#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000000000000

int main(void) {
	long long int a;
	double b;
	
	if (scanf("%lld", &a) < 0) {
		exit(1);
	}
	if (scanf("%lf", &b) < 0) {
		exit(1);
	}
	if (a < 0 || MAX < a) {
		exit(1);
	}
	if (b < 0 || 10 < b) {
		exit(1);
	}
	
	long long int c;
	c = (long long int)((double)a * b);
	printf("%lld\n", c);
}
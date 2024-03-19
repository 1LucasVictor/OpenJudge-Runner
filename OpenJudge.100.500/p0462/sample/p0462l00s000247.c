#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>



int main (void) {
	long long int a;
	double b, res;
	
	
	scanf("%lld %lf", &a, &b);
	
	res = a*b;
	
	printf("%lli\n", (long long int)res);
	
	return 0;
}

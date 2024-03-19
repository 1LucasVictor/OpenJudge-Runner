#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

int main(void) {
	long double a, b;
	scanf("%Lf %Lf", &a, &b);
	printf("%lld\n", (long long)(a * b) / 1);
	
	return 0;
}
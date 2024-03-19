#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	long n, d, x, y, a, count = 0;
	scanf("%ld", &n);
	scanf("%ld", &d);
	for (a = 0; a < n; a++) {
		scanf("%ld", &x);
		scanf("%ld", &y);
		if ( sqrt(x*x+y*y)<=d) {
			count++;
		}
	}
	printf("%ld\n",count);
	return 0;
	
}
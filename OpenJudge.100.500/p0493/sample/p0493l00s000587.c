#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	long long int X=0;

	int n500,n5;

	scanf("%lld",&X);

	n500 = X / 500;
	n5 = (X - n500 * 500) / 5;

	printf("%d", n500*1000+n5*5);

	return 0;
}


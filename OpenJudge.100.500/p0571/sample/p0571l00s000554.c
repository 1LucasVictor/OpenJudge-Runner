#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

//1,000,000,007
//1000000007
int main(void)
{
	long int n, a, b;
	long int i, j;
	long int count, sum;
	
	scanf("%ld%ld%ld", &n, &a, &b);
	
	if(b > n * a) {
		printf("%ld\n", n * a);
	} else {
		printf("%ld\n", b);
	}
	
	return 0;
}
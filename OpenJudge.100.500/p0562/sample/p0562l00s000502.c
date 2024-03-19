#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	long int i, j;
	long int a, b;
	long int sum;
	long int max;
	long int count;
	long int heit;
	long int h[100000];
	
	scanf("%ld%ld", &a, &b);
	
	max = b / a;
	
	if(b % a != 0) {
		max++;
	}
	
	printf("%ld\n", max);
	
	return 0;
}

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
	
	if(b == 1) {
		return 0;
	}
	
	max = a;
	count = 1;
	
	while(1) {
		if(max >= b) {
			break;
		}
		max += (a - 1);
		count++;
	}
	
	printf("%ld\n", count);
	
	return 0;
}

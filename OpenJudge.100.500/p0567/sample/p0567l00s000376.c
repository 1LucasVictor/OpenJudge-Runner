#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	long int i, j;
	long int height;
	long int a, b, c;
	long int flg = 0;
	long int h[100000] = {0};
	
	scanf("%ld%ld%ld", &a, &b, &c);
	
	if(a < b + c) {
		printf("%ld\n", b + c - a);
	} else {
		printf("%ld\n",0);
	}
	
	
	
	return 0;
}

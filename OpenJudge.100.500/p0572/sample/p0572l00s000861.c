#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

//1,000,000,007
//1000000007
int main(void)
{
	long int l, r;
	long int i, j, k;
	long int min = 2019;
	
	scanf("%ld%ld", &l, &r);
	
	if(l % 2019 == 0) {
		printf("0\n");
		return 0;
	}
	
	if(r - l >= 2019) {
		printf("0\n");
		return 0;
	}
	
	if( (l % 2019) > (r % 2019) ) {
		printf("0\n");
		return 0;
	}
	
	for(i = l; i <= r; i++) {
		for(j = i + 1; j <= r; j++) {
			if(min > (i * j) % 2019) {
				min = (i * j) % 2019;
			}
		}
	}
	
	printf("%ld\n", min);
	
	return 0;
}
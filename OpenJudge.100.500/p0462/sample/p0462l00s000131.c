#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>

int main(void){
	long long int sum=0,a;
	double b;

	scanf("%lld %lf\n",&a,&b);
	sum=(long long int)(a*b);
	printf("%lld",sum);
	return 0;
}

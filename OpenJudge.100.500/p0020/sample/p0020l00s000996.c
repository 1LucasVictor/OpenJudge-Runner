#include <stdio.h>
#include <math.h>
int main( void ){
	int i, n;
	float a[8];
	for( scanf("%d",&n); n--; ){
		for( i = 0; i < 8; i++ )scanf("%f",a+i);
		puts(fabs((*a-a[2])*(a[5]-a[7])-(a[1]-a[3])*(a[4]-a[6]))<1e-9?"YES":"NO");
	}
	return 0;
}
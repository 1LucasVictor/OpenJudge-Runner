#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long int a;
	float b;
	scanf("%lld %f",&a,&b);
	//printf("%lld\n",a);
	//printf("%lf\n",b);
	printf("%lld",(a*(int)(100*b+0.5))/100);
	return 0;
}

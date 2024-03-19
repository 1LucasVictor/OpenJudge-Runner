#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long a,sum;
	double b;
	scanf("%lld%lf",&a,&b);
	sum = ((double)a*b);
	//printf("%lld\n",a);
	//printf("%lf\n",b);
	printf("%lld\n",sum);
	return 0;
}

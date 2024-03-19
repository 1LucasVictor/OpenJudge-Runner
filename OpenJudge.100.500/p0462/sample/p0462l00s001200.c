#include <stdio.h>


int main(){
	long long a;
	double b;
	scanf("%lld %lf",&a,&b);
	long long ans = a*(long long)(100*b + 0.5);
	printf("%lld",ans/100);
	return 0;
}
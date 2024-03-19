#include <stdio.h>

main()
{
	long long a;
	double b;
	long long c;
	
	scanf("%lld %lf",&a,&b);
	
	c=(double)a*b;
	
	printf("%lld",(long long)c);
}
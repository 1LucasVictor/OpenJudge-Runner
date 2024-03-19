#include <stdio.h>

int main()
{	 
	long long a, c;
	double b;
	
	scanf("%lld%lf", &a, &b);
	c = a * (long long)(b * 100) / 100;
	printf("%lld\n", c);
		
	return 0;
}
#include <stdio.h>
 
int main(void) {
	unsigned long long a = 0;
	double b = 0;
	unsigned long long c = 0;
	unsigned long long aa = 0;
 
	scanf("%llu", &a);
	scanf("%lf", &b);
	aa = b * 100;
 
	c = aa * a ;
  c=c/ 100;
 
	printf("%llu", c);
 
	return 0;
}
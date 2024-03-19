#include <stdio.h>
int main(void){
	long a;
	double b;
	scanf("%ld", &a);
	scanf("%lf", &b);
	long long_b = (long)(b*100);
	printf("%ld\n", a*long_b/100);
	return 0;
}
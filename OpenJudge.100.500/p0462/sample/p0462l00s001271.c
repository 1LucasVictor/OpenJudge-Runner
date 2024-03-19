#include <stdio.h>
#include <math.h>
 
int main(void) {

	long a, ans;
	double b;
	
	scanf("%ld %lf", &a, &b);
	
	ans = a * b;
	
	printf("%ld", ans);
 
	return 0;
}
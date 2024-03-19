#include <stdio.h>
#include <string.h>


int main(void)
{
	
	double a, b, t;
	int ans;
	int x[100];
	int i;
	
	
	scanf("%lf%lf%lf", &a, &b, &t);
	
	ans = (t + 0.5) / a;
	
	ans *= b;
	
	printf("%d", ans);
	
	return 0;
}
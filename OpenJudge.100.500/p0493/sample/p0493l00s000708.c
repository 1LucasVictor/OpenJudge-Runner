#include <stdio.h>
int main(void)
{
	long x;
	int a,b,ans;
	scanf("%ld",&x);
	a = x / 500;
	x = x - 500*a;
	b = x / 5;
	ans = 1000*a + 5*b;
	printf("%d",ans);
	return 0;
}
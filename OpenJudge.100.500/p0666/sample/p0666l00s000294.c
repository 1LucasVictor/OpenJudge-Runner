#include <stdio.h>
int main(void)
{
	int x,a,b;
	scanf("%d %d %d", &x, &a, &b);
	if(a>=b)
	printf("delicious\n");
	else if(a*-1+b<=x)
	printf("safe\n");
	else
	printf("dangerous\n");
	
	return 0;
}
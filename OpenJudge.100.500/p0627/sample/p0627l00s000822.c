#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define abs(a) (((a)>0)?(a):(-a))

int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	printf("%d", max(a+b,max(a-b,a*b)));
	return 0;
}
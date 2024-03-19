#include <stdio.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=0; i<=n; i++)

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	int d=c-a+b;
	
	printf("%d", (d>0)?(d):0);
	
	return 0;
}
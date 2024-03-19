#include <stdio.h>

int main(void)
{
	long x;
	
	scanf("%ld", &x);
	
	printf("%d:%d:%d\n", x/3600, (x/60)%60, x%60);
	
	return 0;
}
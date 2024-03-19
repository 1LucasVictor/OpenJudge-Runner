#include<stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	
	int fh = x / 500;
	int f = (x % 500) / 5;
	printf("%d", fh*1000+f*5);
	return 0;
}

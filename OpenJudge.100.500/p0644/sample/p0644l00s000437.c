#include <stdio.h>

int main(void)
{
	int n;
	int a[4];
	
	scanf("%d", &n);
	
	a[0] = n /100;
	a[1] = n /10 %10;
	a[2] = n %100 %10;
	
	a[3] = a[0] + a[1] +a[2];
	
	printf("%d", a[3]);
	
	return 0;
}
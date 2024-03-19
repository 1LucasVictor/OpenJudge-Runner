#include<stdio.h>

int main(void)
{
	int i;
	int n;
	int amount = 100000;
	
	scanf("%d", &n);
	
	for( i = 0 ; i < n ; i++ )
	{
		amount *= 1.05;
	}
	
	amount += (10000 - amount % 10000);
	
	printf("%d\n", amount );
	
	return 0;
	
	
}
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
		if( amount % 1000 != 0 ) amount += (1000 - amount % 1000);
	}
	
	printf("%d\n", amount );
	
	return 0;
	
	
}
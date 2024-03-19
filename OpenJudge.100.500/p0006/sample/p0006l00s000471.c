#include <stdio.h>

int main( void )
{
	int week;
	int returnMoney;
	int i;
	double ratio;
	
	ratio = 1.05;
	returnMoney = 100000;
	scanf( "%d", &week );
	for( i = 1; i < week; i++ )
	{
		ratio *= 1.05;
	}
	returnMoney *= ratio;
	if( returnMoney % 1000 > 0 )
	{
		returnMoney = returnMoney / 10000 * 10000 + 10000;
	}	
	printf( "%d\n", returnMoney );
	
	return (0);
}
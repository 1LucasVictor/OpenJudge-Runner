#include <stdio.h>

int main( void )
{
	int arry[100];
	int length, number, cou;
	
	scanf( "%d", &length );
	cou = 0;
	
	while( cou < length )
	{
		scanf( "%d", &arry[ cou ] );
		cou++;
	}
	
	cou = 1;
	
	while( cou <= length )
	{
		if( length - cou == 0 )
		{
			printf( "%d\n", arry[ length - cou ] );
			break;
		}
		else
		{
			printf( "%d ", arry[ length - cou ] );
		}
		cou++;
	}

	return 0;
}
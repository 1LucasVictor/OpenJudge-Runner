//71
#include <stdio.h>

#define MAX_TRAIN	( 10 )

void trainAdd( int addTrainNumber );
int trainGone( void );

int nowTrainArray;
int trainArray[ MAX_TRAIN ];

int main( void )
{
	int trainNumber;
	
	int i;
	
	while( scanf( "%d", &trainNumber ) != EOF )
	{
		if( trainNumber == 0 )
		{
			printf( "%d\n", trainGone() );
		}
		else
		{
			trainAdd( trainNumber );
		}
	}
	
	return (0);
}

void trainAdd( int addTrainNumber )
{
	trainArray[ nowTrainArray ] = addTrainNumber;
	nowTrainArray++;
}

int trainGone( void )
{
	nowTrainArray--;
	return ( trainArray[ nowTrainArray ] );
}
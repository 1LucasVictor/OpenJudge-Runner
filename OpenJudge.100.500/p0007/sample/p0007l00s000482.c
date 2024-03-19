#include<stdio.h>


int main( void )
{
	int N ;
	while( scanf( "%d" ,&N ) != EOF )
	{
		long cnt[ 4 + 1 ][ 50 + 1 ] = { 0 } ;

		int i ,j ,k ;
		for( i = 1 ; i <= 4 ; ++i )
		{
			for( j = 0 ; j <= N ; ++j )
			{
				if( cnt[ i - 1 ][ j ] > 0 || i == 1 )
				{
					for( k = 0 ; k <= 9 ; ++k )
					{
						if( j + k < 50 + 1 )
						{
							cnt[ i ][ j + k ] = cnt[ i - 1 ][ j ] + 1 ;
						}
					}
				}
			}
		}

		printf( "%ld\n" ,cnt[ 4 ][ N ] ) ;
	}

	return 0 ;
}

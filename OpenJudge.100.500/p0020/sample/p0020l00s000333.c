#include <stdio.h>

typedef struct
{
	float x;
	float y;
}POSITION;

int main( void )
{
	POSITION pos[4];
	int n;
	int i;
	int j;
	
	scanf( "%d\n", &n );
	for( i = 0; i < n; i++ )
	{
		for( j = 0; j < 4; j++ )
		{
			scanf( "%f %f", &pos[j].x, &pos[j].y );
		}
		if( (pos[0].x - pos[1].x) / (pos[0].y - pos[1].y) == (pos[2].x - pos[3].x) / (pos[2].y - pos[3].y) )
		{
			printf( "YES\n" );
		}
		else
		{
			printf( "NO\n" );
		}
	}
	
	return (0);
}
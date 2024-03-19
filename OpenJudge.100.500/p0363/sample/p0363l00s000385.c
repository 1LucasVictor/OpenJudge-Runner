#include <stdio.h>

int main(void)
{
	int a, b, c, tmp;
	int i, j,t;
	int Arry[3];
	
	scanf( "%d %d %d", &a, &b, &c );
	Arry[0] = a;
	Arry[1] = b;
	Arry[2] = c;
	
	for( i = 0; i < 3; i++ )
	{
		for( j = i+1; j < 3; j++ )
		{
			if( Arry[i] > Arry[j] )
			{
				tmp = Arry[i];
				Arry[i] = Arry[j];
				Arry[j] = tmp;
			}
		}
	}
	
	printf( "%d %d %d\n", Arry[0], Arry[1], Arry[2] );
	
	return 0;
}
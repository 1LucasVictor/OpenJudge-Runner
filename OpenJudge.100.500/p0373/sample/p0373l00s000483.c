#include <stdio.h>

int main( void )
{
	int H, W, H_Cou, W_Cou;
	
	while(1)
	{
		scanf( "%d %d", &H, &W );
		
		if( H == 0 && W == 0 )
		{
			break;
		}
		else
		{
			for( H_Cou = 0; H_Cou < H; H_Cou++ )
			{
				if( H_Cou == 0 || H_Cou == H - 1 )
				{
					for( W_Cou = 0; W_Cou < W; W_Cou++ )
					{
						printf( "#" );
					}
				}
				else
				{
					for( W_Cou = 0; W_Cou < W; W_Cou++ )
					{
						if( W_Cou == 0 || W_Cou == W - 1 )
						{
							printf( "#" );
						}
						else
						{
							printf( "." );
						}
					}
				}
				printf( "\n" );
			}
			printf( "\n" );
		}
	}
	return 0;
}
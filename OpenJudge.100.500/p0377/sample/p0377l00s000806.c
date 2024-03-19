#include<stdio.h>

#define N_MAX (int) 52
#define AI_MAX (int) 13
#define AI_MIN (int) 1

void SortRank(int *card, int dx);
void PrintCard(int *card, char gara);

int main(void)
{
	char gara;
	int n, rank;
	int SCard[13], HCard[13], CCard[13], DCard[13];
	int dx_s=0, dx_h=0, dx_c=0, dx_d=0;
	
	if( scanf( "%d%*c", &n ) == 1 )
	{
		if( n <= N_MAX )
		{
			for( int i = 0; i < n; i++ )
			{
				if( scanf( "%c %d%*c", &gara, &rank ) == 2 )
				{
					if( ( rank < AI_MIN ) || ( rank > AI_MAX ) )
						{
						return -1;
					}
					else if( gara == 'S' )
					{
						SCard[dx_s] = rank;
						dx_s++;
					}
					else if( gara == 'H' )
					{
						HCard[dx_h] = rank;
						dx_h++;
					}
					else if( gara == 'C' )
					{
						CCard[dx_c] = rank;
						dx_c++;
					}
					else if( gara == 'D' )
					{
						DCard[dx_d] = rank;
						dx_d++;
					}
					else
					{
						return -1;
					}
				}
				else
				{
					return -1;
				}
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
	
	SortRank( &SCard[0], dx_s );
	SortRank( &HCard[0], dx_h );
	SortRank( &CCard[0], dx_c );
	SortRank( &DCard[0], dx_d );
	
	PrintCard( &SCard[0], 'S');
	PrintCard( &HCard[0], 'H');
	PrintCard( &CCard[0], 'C');
	PrintCard( &DCard[0], 'D');
	
	return 0;
}

void SortRank(int *card, int dx)
{
	int tmp;
	
	for( int i = 0; i-1 < dx; i++ )
	{
		for(int j = i+1; j < dx; j++ )
		{
			if( card[i] > card[j] )
			{
				tmp = card[i];
				card[i] = card[j];
				card[j] = tmp;
			}
		}
	}
	
	return;
}

void PrintCard(int *card, char gara)
{
	int dx=0;
	
	for( int i = 1; i < AI_MAX; i++)
	{
		if( i != card[dx] )
		{
			printf( "%c %d\n", gara, i );
		}
		else
		{
			dx++;
		}
	}
	
	return;
}


#include <stdio.h>
#define W 0
#define H 1
#define x 2
#define y 3
#define r 4

int GetNumEqual( int *pNum , int min , int max );
void ComparisonNum( int *pNum );

int main( void )
{
    int max = 100;
    int min;
    
    int getNum[5] = {};
    
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( i == W || i == H || i == r )
        {
            min = 0;
        }
        else
        {
            min = -100;
        }
        
        if( -1 == GetNumEqual( getNum + i , min , max ) )
        {
            return 0;
        }
    }
    
    ComparisonNum( getNum );
    
    return 0;
}

int GetNumEqual( int *pNum , int min , int max )
{
    int getNum;
    
    scanf( "%d" , &getNum );
    
    if( ( getNum >= min ) && ( getNum <= max ) )
    {
        *pNum = getNum;
        return 0;
    }
    return -1;
}

void ComparisonNum( int *pNum )
{
    if( *( pNum + x ) - *( pNum + r ) < 0 )
    {
        printf( "No\n" );
        return;
    }
    if( *( pNum + y ) - *( pNum + r ) < 0 )
    {
        printf( "No\n" );
        return;
    }
    
    if( *( pNum + x ) + *( pNum + r ) <= *( pNum + W ) )
    {
        if( *( pNum + y ) + *( pNum + r ) <= *( pNum + H ) )
        {
            printf( "Yes\n" );
            return;
        }
    }
    printf( "No\n" );
}
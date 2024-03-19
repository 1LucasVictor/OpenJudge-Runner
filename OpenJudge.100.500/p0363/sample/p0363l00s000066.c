#include <stdio.h>
#define MAX 10000
#define MIN 1
int GetNumEqual( int *pNum );
void BubSort( int *pNum );

int main( void )
{
    int getNum[3] = {};
    
    for( int i = 0 ; i < 3 ; i++ )
    {
        if( 0 != GetNumEqual( getNum + i ) )
        {
            return 0;
        }
    }
    
    BubSort( getNum );
    
    return 0;
}

int GetNumEqual( int *pNum )
{
    int getNum;
    
    scanf( "%d" , &getNum );
    
    if( ( getNum >= MIN ) && ( getNum <= MAX ) )
    {
        *pNum = getNum;
        return 0;
    }
    
    return -1;
}

void BubSort( int *pNum )
{
    int value = 0;
    for( int i = 0 ; i < 3 ; i++ )
    {
       for( int j = 2 ; j > i ; j-- )
       {
           if( pNum[j] < pNum[j-1] )
           {
               value = pNum[j];
               pNum[j] = pNum[j-1];
               pNum[j-1] = value;
           }
       }
    }
    
    printf( "%d %d %d\n" , pNum[0] , pNum[1] , pNum[2] );
}
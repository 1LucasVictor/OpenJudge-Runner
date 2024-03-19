#include <stdio.h>
#define MAX 100
#define MIN 0
int GetNumEqual( int *pNum );
void Compare3Num( int numA, int numB, int getNumC );

int main( void )
{
    int getNumA , getNumB, getNumC;
    
    if( 0 == GetNumEqual( &getNumA ) )
    {
        if( 0 == GetNumEqual( &getNumB ) )
        {
            if( 0 == GetNumEqual( &getNumC ) )
            {
                Compare3Num( getNumA , getNumB, getNumC );
            }
        }
    }
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

void Compare3Num( int numA, int numB, int numC )
{
    if( numA < numB )
    {
        if( numB < numC )
        {
            printf( "Yes\n" );
            return;
        }
    }
    printf( "No\n" );
}
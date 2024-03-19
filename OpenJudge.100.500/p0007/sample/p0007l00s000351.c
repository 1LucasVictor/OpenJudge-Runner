#include <stdio.h>

int alg ( int input )
{
    int i, j, k, l, limit;
    int counter = 0;

    for ( i = 0; i < 10; i++ )
    {
        for ( j = 0; j < 10; j++ )
        {
            for ( k = 0; k < 10; k++ )
            {
                for ( l = 0; l < 10; l++ )
                {
                    if ( ( i + j + k + l ) == input )
                        counter++;
                }
            }
        }
    }

    return counter;
}

int main ( void )
{
    int input;
    while ( scanf( "%d", &input ) != EOF )
    {
        printf( "%d\n", alg( input ) );
    }
    return 0;
}
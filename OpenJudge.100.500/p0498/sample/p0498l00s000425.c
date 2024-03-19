/*
Anki:未済
作成日:①2020/03/01
*/

#include <stdio.h>

int main()
{
    int n, p;
    
    scanf( "%d", &n );

    p = n /2;
    if( n % 2 == 0 )  
        printf( "%d", p );
    else
        printf( "%d\n", p + 1 );
    return 0;
}
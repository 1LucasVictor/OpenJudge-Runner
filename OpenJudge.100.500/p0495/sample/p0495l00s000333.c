/*
Anki:未済
作成日:
*/

#include <stdio.h>

int main()
{
    char a, b, c;

    scanf( "%c%c%c", &a, &b, &c );
    if( a == 'A' && b == 'B') printf( "Yes\n" );
    else if (a == 'B' && b == 'A') printf("Yes\n");
    else if (b == 'A' && c == 'B') printf("Yes\n");
    else if (b == 'B' && c == 'A') printf("Yes\n");
    else printf( "No\n" );
    
    return 0;
}
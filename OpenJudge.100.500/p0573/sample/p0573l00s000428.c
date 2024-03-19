#include <stdio.h>
#include <memory.h>

int main()
{
    char S[16];
    int n[26];

    memset( n, 0, 26*sizeof(int) );    

    scanf( "%s", S );

    for ( int i = 0; i < 4; i ++ ) n[S[i]-'A'] ++;

    int c = 0;
    for ( int i = 0; i < 26; i ++ ) {
        
        if ( n[i] == 2 ) c ++;
    }

    if ( c == 2 ) printf( "Yes\n" );
    else printf( "No\n" );


    return 0;
}
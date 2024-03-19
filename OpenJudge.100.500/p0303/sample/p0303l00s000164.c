#include <stdio.h>
#include <stdlib.h>

int main ( )
{
    int VAR00 , VAR01 , VAR02 = 0 , VAR03 ;
    scanf ( "%d %d" , & VAR00 , & VAR01 ) ;
    int * VAR04 = malloc ( sizeof ( int ) * VAR00 ) ;
    for ( int VAR05 = 0 ; VAR05 < VAR00 ; VAR05 ++ ) {
        scanf ( "%d" , & VAR03 ) ;
        VAR02 += VAR03 ;
        VAR04 [ VAR05 ] = VAR03 ;
    }
    int VAR06 = 1 , VAR07 = VAR02 , VAR08 , VAR09 , VAR10 , VAR11 ;
    VAR08 = ( VAR06 + VAR07 ) / 2 ;

    while ( 1 )
    {


        VAR10 = VAR08 ;
        VAR11 = 0 ;
        VAR09 = 0 ;
        for ( int VAR12 = 0 ; VAR12 < VAR00 ; VAR12 ++ )
        {

            if ( VAR10 < VAR04 [ VAR12 ] )
            {

                VAR09 ++ ;
                VAR10 = VAR08 ;
                if ( VAR08 < VAR04 [ VAR12 ] ) {
                    VAR11 = 1 ;
                    break ;
                }
                else VAR10 -= VAR04 [ VAR12 ] ;
            } else
            {

                VAR10 -= VAR04 [ VAR12 ] ;
            }

            if ( VAR09 == VAR01 ) {
                VAR11 = 1 ;

                break ;
            }
        }
        if ( VAR06 == VAR07 ) break ;
        else {
            if ( VAR11 == 1 ) {
                VAR06 = VAR08 + 1 ;
            } else {
                VAR07 = VAR08 ;
            }
        }
        VAR08 = ( VAR07 + VAR06 ) / 2 ;

    }
    printf ( "%d\n" , VAR07 ) ;
}

#include <stdio.h>
#include <string.h>


int main( void )
{
    int lim ;
    scanf( "%d" ,&lim ) ;
    
    int i ;
    for( i = 3 ; i <= lim ; ++i )
    {
        char str[ 256 ] ;
        sprintf( str ,"%d" ,i ) ;
        
        if( i % 3 == 0 || strstr( str ,"3" ) != NULL )
        {
            printf( " %d" ,i ) ;
        }
    }
    
    puts( "" ) ;
    
    
    return 0 ;
}


#include <stdio.h>

int main( void ) {
  int i;
  char ch[ 21 ];

  scanf( "%s", ch );

  for( i = 0; ch[ i ]; i++ ) ;

  for( i--; i >= 0; i-- )
    printf( "%c", ch[ i ] );

  printf( "\n" );

  return( 0 );
}
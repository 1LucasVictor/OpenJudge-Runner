
#include <stdio.h>

int LUT[ 'Z' + 1 ] = { };

int
main (
  int   argc,
  char *argv[ ]
  )
{
  int cards[ 4 ][ 14 ] = { };
  int n;
  int i, j;

  LUT[ 'S' ] = 0;
  LUT[ 'H' ] = 1;
  LUT[ 'C' ] = 2;
  LUT[ 'D' ] = 3;

  scanf ( "%d", &n );
  while ( n-- )
  {
    char mark;
    int  rank;

    scanf ( " %c %d", &mark, &rank );
    cards[ LUT[ mark ] ][ rank ] = 1;
  }

  for ( i = 0; i < 4; ++i )
  for ( j = 1; j <= 13; ++j )
  {
    const char MK[ ] = { 'S', 'H', 'C', 'D' };

    if ( cards[ i ][ j ] ) continue ;
    printf ( "%c %d\n", MK[ i ], j );
  }

  return ( 0 );
}
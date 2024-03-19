#include <stdio.h>
#include <stdlib.h>

int
main (
  int   argc,
  char *argv[ ]
  )
{
  int r[ 51 ] = { 0 };
  int a, b, c, d;
  int n;

  for ( a = 0; a <= 9; ++a )
  for ( b = 0; b <= 9; ++b )
  for ( c = 0; c <= 9; ++c )
  for ( d = 0; d <= 9; ++d )
    ++r[ a + b + c + d ];

  while ( scanf ( "%d", &n ) == 1 )
    printf ( "%d\n", r[ n ] );

  return ( EXIT_SUCCESS );
}
#include <stdio.h>
#include <stdlib.h>

int
main (
  int   argc,
  char *argv[ ]
  )
{
  double x[ 4 ], y[ 4 ];
  int n;

  scanf ( "%d", &n );
  while ( n-- )
  {
    scanf ( "%lf%lf%lf%lf%lf%lf%lf%lf", &x[ 0 ], &y[ 0 ]
          , &x[ 1 ], &y[ 1 ], &x[ 2 ], &y[ 2 ], &x[ 3 ], &y[ 3 ] );

    puts ( ( y[ 1 ] - y[ 0 ] ) * ( x[ 3 ] - x[ 2 ] )
        == ( y[ 3 ] - y[ 2 ] ) * ( x[ 1 ] - x[ 0 ] )
         ? "YES" : "NO" );
  }

  return ( EXIT_SUCCESS );
}
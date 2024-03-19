#include <stdio.h>

/** Application main entry point. */
int
main (
  int     argc,
  char  * argv[ ]
  )
{
  int res = 0;
  int n;
  int i;

  scanf ( "%d", &n );
  while ( n-- )
  {
    int d;

    scanf ( "%d", &d );
    for ( i = 2; i * i <= d; ++i )
    {
      if ( d % i == 0 ) break ;
    }
    res += !!( i * i > d );
  }
  printf ( "%d\n", res );

  return ( 0 );
}
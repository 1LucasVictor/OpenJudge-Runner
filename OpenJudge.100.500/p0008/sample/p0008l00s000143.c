#include <stdio.h>

static int
isPrime (
  int n
  )
{
  int i;

  if ( n < 2
    || !( n % 2 ) ) return ( 0 );

  for ( i = 3; i * i <= n; i += 2 )
  {
    if ( !( n % i ) ) return ( 0 );
  }

  return ( 1 );
}

/** Application main entry point. */
int
main (
  int     argc,
  char  * argv[ ]
  )
{
  for ( ; ; )
  {
    int res = 0;
    int n;

    if ( scanf ( "%d", &n ) != 1 ) break;
    res += !!( n >= 2 );
    for ( n -= !( n % 2 ); n >= 2; n -= 2 )
    {
      res += !!( isPrime ( n ) );
    }

    printf ( "%d\n", res );
  }

  return ( 0 );
}
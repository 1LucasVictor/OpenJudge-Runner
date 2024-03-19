#include <stdio.h>
#include <string.h>

#define N 1000000

static int k_operafan[ N ] = { 0, 0, 1 };
static int n_operafan = 3;

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
    int n;

    if ( scanf ( "%d", &n ) != 1 ) break;

    for ( ; n_operafan <= n; ++n_operafan )
    {
      k_operafan[ n_operafan ] = k_operafan[ n_operafan - 1 ]
                               + !!( isPrime ( n_operafan ) );
    }

    printf ( "%d\n", k_operafan[ n ] );
  }

  return ( 0 );
}
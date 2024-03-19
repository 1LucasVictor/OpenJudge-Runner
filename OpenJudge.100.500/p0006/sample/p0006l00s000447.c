#include <stdio.h>

/** Application main entry point. */
int main (
  int argc,
  char *argv[ ]
  )
{
  int res = 100000;
  int n;
  
  scanf ( "%d", &n );

  while ( n-- )
  {
    res += res / 20;
    if ( res % 1000 )
    {
      res = ( res / 1000 ) * 1000 + 1000;
    }
  }
  printf ( "%d\n", res );

  return ( 0 );
}
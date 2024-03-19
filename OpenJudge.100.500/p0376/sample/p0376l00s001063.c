#include <stdio.h>
 
#define N 128
 
int
main (
  int   argc,
  char *argv[ ]
  )
{
  int a[ N ];
  int n;
  int i;
 
  scanf ( "%d", &n );
  for ( i = 0; i < n; ++i )
  {
    scanf ( "%d", &a[ i ] );
  }
 
  while ( n-- )
  {
    printf ( "%d", a[ n ] );
    putchar ( n ? ' ' : '\n' );
  }
 
  return ( 0 );
}
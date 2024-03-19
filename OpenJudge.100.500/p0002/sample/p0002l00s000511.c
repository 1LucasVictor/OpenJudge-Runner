#include <stdio.h>

#define SWAP(A,B) { int __tempora = B; B = A; A = __tempora; }
#define SQUARE(X) ((X)*(X))

/** Application main entry point. */
int main (
  int argc,
  char *argv[ ]
  )
{
  int n;

  scanf ( "%d", &n );

  while ( n-- )
  {
    int a, b, c;

    scanf ( " %d %d %d", &a ,&b ,&c );
    if ( b > a && b > c )
    {
      SWAP(a,b); 
    }
    else if ( c > a && c > b )
    {
      SWAP(a,c); 
    }

    puts ( SQUARE(a) == SQUARE(b) + SQUARE(c)
      ? "YES"
      : "NO" );
  }

  return ( 0 );
}
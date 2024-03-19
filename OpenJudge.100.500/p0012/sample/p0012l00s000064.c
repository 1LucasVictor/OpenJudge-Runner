#include <stdio.h>

#define STACKSZ ( 10 )

/** Application main entry point. */
int main (
  int argc,
  char *argv[ ]
  )
{
  int stack[ STACKSZ ];
  int *sp = stack;
  int d;

  while ( scanf ( "%d", &d ) == 1 )
  {
    if ( d )
    {
      *( sp++ ) = d;
    }
    else
    {
      printf ( "%d\n", *( --sp ) );
    }
  }

  return ( 0 );
}
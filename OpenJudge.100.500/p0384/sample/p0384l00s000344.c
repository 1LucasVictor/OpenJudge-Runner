#include <stdio.h>
#include <ctype.h>

int
main (
  int   argc,
  char *argv[ ]
  )
{
  for ( ; ; )
  {
    const int ch = getchar ( );

    putchar ( islower ( ch ) ? toupper ( ch )
            : isupper ( ch ) ? tolower ( ch )
            : ch );

    if ( ch == '\n' ) break ;
  }

  return ( 0 );
}
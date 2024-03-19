#include <stdio.h>
#include <string.h>
 
#define N 256
 
int
main (
  int   argc,
  char *argv[ ]
  )
{
  for ( ; ; )
  {
    char s[ N ];
    int n;
 
    scanf ( " %s", s );
    if ( !strcmp ( s, "-" ) ) break ;
 
    scanf ( "%d", &n );
    while ( n-- )
    {
      char t[ N ];
      int h;
 
      scanf ( "%d", &h );
      strcpy ( t, s );
      strcpy ( s, t + h );
      strncat ( s, t, h );
    }
 
    puts ( s );
  }
 
  return ( 0 );
}
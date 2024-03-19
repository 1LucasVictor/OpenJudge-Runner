#include <stdio.h>
#include <ctype.h>
 
int
main (
  int   argc,
  char *argv[ ]
  )
{
  int res = 0;
 
  for ( ; ; )
  {
    const int ch = getchar ( );
 
    if ( isdigit ( ch ) )
    {
      res += ch - '0';
    }
    else
    {
      if ( res == 0 ) break ;
 
      printf ( "%d\n", res );
      res = 0;
    }
  }
 
  return ( 0 );
}

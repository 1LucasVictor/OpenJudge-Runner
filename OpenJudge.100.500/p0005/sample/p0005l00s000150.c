#include <stdio.h>
#include <string.h>

/** Application main entry point. */
int main (
  int argc,
  char *argv[ ]
  )
{
  char buf[ 1024 ];
  char *p;
  
  fgets ( buf, sizeof ( buf ), stdin );

  p = strchr ( buf, '\n' );
  while ( p > buf )
  {
    putchar ( *(--p) );
  }
  puts ( "" );

  return ( 0 );
}
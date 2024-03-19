#include <stdio.h>
 
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
    double x1, x2, x3, x4;
    double y1, y2, y3, y4;
 
    scanf ( " %lf %lf", &x1, &y1 );
    scanf ( " %lf %lf", &x2, &y2 );
    scanf ( " %lf %lf", &x3, &y3 );
    scanf ( " %lf %lf", &x4, &y4 );
 
    if ( ( y2 - y1 ) / ( x2 - x1 ) == ( y4 - y3 ) / ( x4 - x3 ) )
    {
      printf ( "YES\n" );
    }
    else
    {
      printf ( "NO\n" );
    }
  }
 
  return ( 0 );
}
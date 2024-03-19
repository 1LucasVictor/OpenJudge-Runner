#include <stdio.h>
#include <math.h>

/** Application main entry point. */
int main (
  int argc,
  char *argv[ ]
  )
{
  double a, b, c, d, e, f;

  while ( scanf ( "%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f ) == 6 )
  {
    int x, y;

    x = floor ( ( c * e - b * f ) / ( a * e - b * d ) * 1000. + 0.5 );
    y = floor ( ( a * f - c * d ) / ( a * e - b * d ) * 1000. + 0.5 );
    printf ( "%d.%03d %d.%03d\n", x / 1000, x % 1000, y / 1000, y % 1000 );
  }

  return ( 0 );
}
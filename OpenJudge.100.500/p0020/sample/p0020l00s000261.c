#include <stdio.h>

int main()
{
        int number, i;
        double x1, x2, x3, x4, y1, y2, y3, y4;

        scanf( "%d", &number );

        for ( i = 0 ; i < number ; i = i + 1 )
        {
                scanf( "%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
                if ( x1 == x2 && x3 == x4 )
                {
                        fprintf( stdout, "YES\n" );
                }
                else if ( (y1 - y2)/(x1 - x2) == (y3 - y4)/(x3 - x4) )
                {
                        fprintf( stdout, "YES\n" );
                }
                else
                {
                        fprintf( stdout, "NO\n" );
                }
        }

        return 0;
}
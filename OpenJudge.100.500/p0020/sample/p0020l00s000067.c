#include <stdio.h>

void isEqual( double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4 )
{
        double m1, m2;

        m1 = ( y1 - y2 ) / ( x1 - x2 ) ;
        m2 = ( y3 - y4 ) / ( x3 - x4 ) ;
        if ( m1 == m2 )
                fprintf( stdout, "YES\n" );
        else
                fprintf( stdout, "NO\n" );
}

int main()
{
        int number = 0, i;
        double x1, y1, x2, y2, x3, y3, x4, y4;

        scanf( "%d", &number );
        for ( i = 0 ; i < number ; i = i + 1 )
        {
                scanf( "%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
                isEqual( x1, y1, x2, y2, x3, y3, x4, y4 );
        }

        return 0;
}
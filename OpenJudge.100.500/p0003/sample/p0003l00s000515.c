#include<stdio.h>


/*
	ax + by = c
	dx + ey = f

	in__a ,b ,c ,d ,e ,f

	x = ( ec + -bf ) / ( ea + -bd ) ;
	y = ( dc + -af ) / ( db + -ea ) ;

*/



double a ,b ,c ,d ,e ,f ;


double x()
{
	return ( ( e * c ) + ( -b * f ) ) / ( ( e * a ) + ( -b * d ) ) ;
}

double y()
{
	return ( ( d * c ) + ( -a * f ) ) / ( ( d * b ) + ( -e * a ) ) ;
}



int main()
{
	while( scanf( "%lf %lf %lf %lf %lf %lf" ,&a ,&b ,&c ,&d ,&e ,&f ) != EOF )
	{
		printf( "%.3lf %.3lf\n" ,x() ,y() ) ;
	}


	return 0 ;
}
#include <stdio.h>

int main( void ) {
	int n, a, b, c;

	for ( scanf( "%d", &n ); n--;  ) {
		scanf( "%d %d %d", &a, &b, &c );

		if ( a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b )
			puts( "YES" );
		else
			puts( "NO" );
	}

	return 0;
}
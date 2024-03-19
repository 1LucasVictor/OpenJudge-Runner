#include <stdio.h>

int main()
{
    long long a,b,t,x,y;
    while ( scanf( "%lld %lld", &a, &b ) != EOF )
    {
	x = a; y = b;
	while ( y > 0 )
	{
	    t = x % y;
	    x = y;
	    y = t;
	}
	printf( "%llu %llu\n", x, a/x*b );
    }
    return 0;
}
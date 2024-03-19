#include <stdio.h>
#include <math.h>

int main()
{
    int a, b,s;
    int cnt = 0;
    while( scanf( "%d %d", &a, &b ) != EOF )
    {
	s = a + b;
	cnt = 0;
	do
	{
	    s /= 10;
	    cnt++;
	}
	while( s != 0 );

	printf( "%d\n", cnt );
    }
    return 0;
}
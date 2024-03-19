#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    while( scanf( "%d %d", &a, &b ) != EOF )
    {
	printf( "%d\n", (a+b!=0)?(int)(log(a + b)/log(10)) + 1:1 );
    }
    return 0;
}
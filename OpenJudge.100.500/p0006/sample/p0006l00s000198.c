#include<stdio.h>

int main(void)
{
	int n, x = 100000;
	scanf( "%d", &n );
	while(n--){
		x *= 1.05;
		if( x % 1000 > 0)
			x += 1000 - x % 1000;
	}
	printf( "%d\n", x );
	return 0;
}
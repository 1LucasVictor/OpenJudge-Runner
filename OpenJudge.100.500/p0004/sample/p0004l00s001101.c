#include <stdio.h>

unsigned long gcd( unsigned long a, unsigned long b )
{
	return (b==0)? a : gcd(b,a%b);
}

unsigned long lcm( unsigned long a, unsigned long b )
{
	return a / gcd(a,b) * b;
}

int main(void)
{
	unsigned long a, b;
	
	while( fscanf(stdin,"%ld %ld\n",&a,&b) >= 0 )
	{
		printf( "%ld %ld\n", gcd(a,b), lcm(a,b) );
	}
	
	return 0;
}
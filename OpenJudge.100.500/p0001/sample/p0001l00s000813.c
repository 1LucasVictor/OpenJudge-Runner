#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	while( fscanf(stdin,"%d %d\n",&a,&b) >= 0 )
	{
		printf( "%d\n", (a+b==0)? 1:((int)log10(a+b)+1) );
	}
	
	return 0;
}
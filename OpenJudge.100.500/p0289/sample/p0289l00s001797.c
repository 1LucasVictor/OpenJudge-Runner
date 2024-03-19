#include <stdio.h>



int main(int argc, char **argv)
{
	unsigned int a,b;
	unsigned int swap;
	unsigned int i;
	char inputs[22];
	
	
	fgets( inputs , sizeof( inputs ), stdin );
	sscanf( inputs , "%d %d", &a, &b );
	
	if( a == 0 || b == 0 )
		return -1;
	
	if( a > b ){
		swap = a;
		a = b;
		b = swap;
	}
	
	i = 0;
	while( i < 1000000000 ){
		if( ( swap = b % a ) == 0 ){
			break;
		}
		b = a;
		a = swap;
		i++;
	}
	
	printf("%d\n",a);
	
	
	return 0;

}
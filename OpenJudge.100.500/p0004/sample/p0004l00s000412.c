#include <stdio.h>


int main( void )
{
    long a,b,r,x;
    
    while( scanf("%ld %ld",&a,&b ) != EOF )
    {
        x = a * b;
        if( a < b ){
        	r = b;
        	b = a;
        	a = r;
		}
		for(;;){
			if( a % b == 0 ){
				printf( "%ld %ld\n", r,x/r );
				break;
			}else{
                r = a % b;
				a = b;
				b = r;
			}
		}
    }
}
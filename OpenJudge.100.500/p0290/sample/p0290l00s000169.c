

#include <stdio.h>


int main(){

	int i, n, k, l, c=0;
	long j, v;

	scanf( "%d", &n );



	for( i=0; i<n; i++ ){

		scanf( "%ld", &v );

		//test well known
		if( v==2l || v==3l || v==5l ){
			//printf( " yes_\n" );
			c++;  continue;
		}

		if( v < 7l ) continue;

		if( v%2l==0 || v%3l==0 || v%5l==0 ){
			continue;
		}


		//not well knowns
		l=0;
		for( j=7l; j<v; j++ ){

			// check for wellknown devider
			if( j%2l==0 || j%3l==0 || j%5l==0 ){
				continue;
			}

			//printf( " %ld / %ld = %ld\n", v, j, v%j );


			// check 
			if( v % j == 0 ){
				l++; break;

			}
		}
		if( l == 0 ){ 
			//printf( " yes\n" );
			c++;
		}
	
	}


	printf( "%d\n", c );

	return 0;

}
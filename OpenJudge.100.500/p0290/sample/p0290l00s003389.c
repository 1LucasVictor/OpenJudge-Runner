

#include <stdio.h>


int main(){

	int i, n, k, l, c=0;
	long j, v;
	long w[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};

	scanf( "%d", &n );


	for( i=0; i<n; i++ ){

		scanf( "%ld", &v );

		
		for( k=0; k<9; k++ ){
			if( v==w[k] ) c++; 
		}
		if( c > 0 ) continue;



		for( j=29l; j<v; j++ ){

			l = 0;
			for( k=0; k<9; k++ ){
				if( v%w[k] == 0 ) l++;
			}
			if( l != 0 ) break;


			if( v%j == 0 ){
				break;
			}
		}



		if( v == j ) c++;
		

	}


	printf( "%d\n", c );

	return 0;

}

#include <stdio.h>
#include <stdlib.h>




int main(){

	int n, i;
	int *buf;


	scanf( "%d", &n );

	buf = (int*)malloc( n*sizeof(int) );
	if(buf==NULL) return 0;

	for( i=0; i<n; i++ ){
		scanf( "%d", &buf[i] );
	}

	for( i=(n-1); i>=0; i--){
		printf( "%d", buf[i] );

		if( i != 0 ) printf( " " ); 
	}

	free(buf);

	printf( "\n" );

	return 0;

}
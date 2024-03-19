
#include <stdio.h>
#include <string.h>

int main(){

	int i, q, a, b, k, len;
	char str[1001], st[1001], inst[33];
	char p[101];
	char * tp;



	scanf( "%s", str );
	scanf( "%d", &q );


	for( i=0; i<q; i++ ){
		scanf( "%s %d %d", inst, &a, &b);
		len = b - a + 1;


		memset( st, '\0', sizeof(st) );
	
		if( strcmp( inst, "print") == 0 ){
			strncpy( st, &str[a], len );
			printf( "%s\n", st );
		}
		if( strcmp( inst, "reverse") == 0 ){
			strncpy( st, &str[a], len );
			for( k=0; k<len; k++ ) str[a+k] = st[len-k-1];
		} 
		if( strcmp( inst, "replace") == 0 ){
			scanf( "%s", p );
			strncpy( &str[a], p, len );
		}
	}


	return 0;

}
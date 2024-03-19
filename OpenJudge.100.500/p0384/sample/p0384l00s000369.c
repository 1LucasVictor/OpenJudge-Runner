
#include <stdio.h>
#include <ctype.h>

int main(){

	char c;

	while(1){
	
		scanf( "%c", &c );

		if( c == '\n' ) break;
		if( isprint(c) ){
			if( islower(c) ) 
				printf( "%c", toupper(c) );
			else if( isupper(c) ) 
				printf( "%c", tolower(c) );
			else
				printf( "%c", c );
		}
	}

	
	printf( "\n" );

	return 0;

}
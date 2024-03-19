
#include <stdio.h>
#include <string.h>


int main(){

	int m, h, len, i;
	char str[201], tmp[201];


	while(1){

		scanf( "%s", str );	
		if( strcmp(str, "-" ) == 0) break;

		len = strlen(str);

		scanf( "%d", &m );

		for( i=0; i<m; i++ ){
	
			scanf( "%d", &h );
	
			strncpy( tmp, &str[h], len-h);
			strncpy( &tmp[len-h], str, h);
			tmp[len] = '\0';
			

			strncpy( str, tmp, len );

		}
	
		printf( "%s\n", str );

	}	

	return 0;

}
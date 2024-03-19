#include<stdio.h>
#include<string.h>

int main( void ) 
{
	char cards[201];
	char shuffle[201];
	int m,h;
	int len;

    
	while( 1 ) {
		scanf( "%s", cards );
		if( '-' == cards[0] ) { break; }
		len=strlen( cards );
		
		scanf( "%d", &m );
		while( 0<m-- ) {
			scanf( "%d", &h );
			memmove( shuffle, cards, h ); 
			shuffle[h] = '\0';
			memmove( cards, cards+h, len-h ); 
			cards[len] = '\0';
			memmove( cards+len-h, shuffle, h ); 
			cards[len] = '\0';
		}
		printf( "%s\n", cards);	
	}

	return 0;
}
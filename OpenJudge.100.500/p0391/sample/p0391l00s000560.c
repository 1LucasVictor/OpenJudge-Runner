#include<stdio.h>
#include<string.h>

int main( void ) 
{
	char str[1001];
	int q;
	char instruction[10];
	char reStr[1001];
	char tmp;
	int a, b;
	int i;

    scanf( "%s", str );
    scanf( "%d", &q );
	while( q-- ) {
		scanf( "%s", instruction );
		if( 0 == strcmp( instruction, "replace" ) ) {
			scanf( "%d%d%s" , &a, &b, reStr );	
			
			memmove( str+a, reStr, b-a+1 ); 
		} else if( 0 == strcmp( instruction, "reverse" ) ) {
			scanf( "%d%d" , &a, &b );
			for( i=a; i<a+(b-a+1)/2; i++ ) {
				tmp=str[b+a-i];
				str[b+a-i]=str[i];
				str[i]=tmp;
			}
		} else if( 0 == strcmp( instruction, "print" ) ) {
			scanf( "%d%d" , &a, &b );			

			for( i=a; i<=b; i++ ) {
				printf( "%c", str[i] );
			}
			printf( "\n" );
		}		
	}
	
	return 0;
}
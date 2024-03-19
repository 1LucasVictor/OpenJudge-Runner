#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[1001],cmd[8],p[1001];
	char t;
	int q,a,b;
	int i,j,k;

	
	scanf( "%s", s );
	scanf( "%d", &q );
	for( i=0; i<q; i++ ) {
		scanf( "%s", cmd );
		if( strcmp( "print" , cmd ) == 0 ) {
			scanf( "%d %d", &a, &b );
			for( j=a; j<=b; j++ ) {
				printf( "%c", s[j] );
			}
			printf( "\n" );
		} else if( strcmp( "reverse" , cmd ) == 0 ) {
			scanf( "%d %d", &a, &b );
			for( j=0; a+j<b-j; j++ ) {
				t = s[a+j];
				s[a+j] = s[b-j];
				s[b-j] = t;
			}
		} else if( strcmp( "replace" , cmd ) == 0 ) {
			scanf( "%d %d %s", &a, &b, p );
			k = 0;
			for( j=a; j<=b; j++ ) {
				s[j] = p[k++];
			}
		}
	}

	return 0;
}

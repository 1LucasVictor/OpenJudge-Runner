#include<stdio.h>
#include<string.h>

#define M 2000000
#define L 14

char H[M][L];

int getChar( char ch )
{
	if( ch == 'A') {
		return 1;
	} else if( ch == 'C') {
		return 2;
	} else if( ch == 'G') {
		return 3;
	} else if( ch == 'T') {
		return 4;
	} else {
		return 0;
	}
}

long long getKey( char str[] )
{
	long long sum = 0, p = 1, i;
	for ( i=0; i<strlen(str); i++ ) {
		sum += p*( getChar( str[i] ) );
		p *= 5;
	}
	return sum;
}

int find( char str[] )
{
	int i, hashkey;
	for( i=0; i<M; i++  ) {
		hashkey = ( getKey( str ) + (2*i+1)*getKey( str ) )%M;
		if( '\0' == H[ hashkey ][0] ) {
			return 0;
		} else {
		    if( 0 == strcmp( H[ hashkey ], str ) ) {
		    	return 1;
		    }
		}
	}
	return 0;
}

void insert( char str[] )
{
	int i, hashkey;
	for( i=0; i<M; i++ ) {
		hashkey = ( getKey( str ) + (2*i+1)*getKey( str ) )%M;
		if( '\0' == H[ hashkey ][0] ) {
			strcpy( H[ hashkey ], str );
			break;
		}
	}
    return;
}

int main() 
{

	int i, n;
	char str[L], com[9];
	
	for ( i=0; i<M; i++ ) {
		H[i][0] = '\0';
	}
	scanf( "%d", &n );
	for ( i=0; i<n; i++ ) {
		scanf( "%s %s", com, str );
		if ( com[0] == 'i' ){
			insert( str );
		} else {
			if( find( str ) ){
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}

    return 0;
}
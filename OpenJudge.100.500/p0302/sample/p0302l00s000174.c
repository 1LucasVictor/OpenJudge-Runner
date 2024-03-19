#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000000

char hash_ary[MAX][14];

int ary_size = MAX;


int h1( int key );
int h2( int key );
int h( int key, int cnt );
int insert( char * str );
void init( );
int my_getchar( char ch );
int getkey( char * str );
int find( char * str );

int h1( int key ) {
	return key % ary_size;
}

int h2( int key ) {
	return 1 + key % ( ary_size -1 );
}

int h( int key, int cnt ) {
	return ( h1(key) + cnt * h2( key) ) % ary_size;
}

int insert( char * str ) {
	long long key, i = 0, my_h;	

	key = getkey( str );
	while ( 1 ) {
		my_h = h( key, i );
		if ( strcmp( hash_ary[my_h], str ) == 0 ) {
			return 1;
		} else if ( hash_ary[my_h][0] == -1 ) {
			strcpy( hash_ary[my_h], str );
			return 0;
		}
		i++;
	}
	return 0;
}

int find( char * str ) {
	long long key = getkey( str );
	long long i = 0;
	long long cnt = 0;
	long long my_h = 0;

	while ( 1 ) {
		my_h = h( key, cnt );
		if ( strcmp( str, hash_ary[my_h] ) == 0 ) {
			return 1;
		} else if ( hash_ary[my_h][0] == -1 || cnt > MAX ) {
			return 0;
		}
		cnt++;
	}
	return 0;
}

void init( ) {
	for ( int i = 0 ; i < MAX ; i++ ) {
		hash_ary[i][0] = -1;
	}
}

int my_getchar( char ch ) {
	if ( ch == 'A' ) {
		return 1;
	} else if ( ch == 'C' ) {
		return 2;
	} else if ( ch == 'G') {
		return 3;
	} else if ( ch == 'T' ) {
		return 4;
	}
	return 0;
}

int getkey( char * str ) {
	long long sum = 0;
	long long p = 1;
	for ( int i = 0 ; i < strlen( str ) ; i++ ) {
		sum += p * my_getchar( str[i] );
		p *= 5;
	}
	return sum;
}


int main(){
	int i = 0;
	int n = 0; 
	char command[10] = { 0 };
	char data[14] = { 0 };

	init();
	scanf( "%d", &n );
	while ( i < n ) {
		scanf( " %s %s", command, data );
		if ( command[0] == 'i' ) {
			insert( data );				
		} else if ( command[0] == 'f' ) {
			if ( find( data ) ) {
				fprintf( stdout, "yes\n" );
			} else {
				fprintf( stdout, "no\n" );
			}
		}
		i++;
	}
	return 0;
}


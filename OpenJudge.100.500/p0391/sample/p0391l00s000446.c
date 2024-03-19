#include <stdio.h>
#include <stdlib.h>

void print_ab( char*, int, int );
void reverse_ab( char*, int, int );
void replace_ab( char*, int, int, char* );

int main(){
	char word[1001] = {'\0'};
	char order[10] = {'\0'};
	int times = 0;
	int a = 0;
	int b = 0;
	int i;
	char enter;
	
	scanf( "%s", word );
	scanf( "%d", &times );
	
	for( i = 0; i < times; i++ ){
		scanf( "%s %d %d", &order, &a, &b );
		
		if( order[2] == 'i' ){
			print_ab( word, a, b );
		}
		else if( order[2] == 'v' ){
			reverse_ab( word, a, b );
		}
		else if( order[2] == 'p' ){
			static char new_word[1001] = {'\0'};
			scanf( "%s", new_word );
			replace_ab( word, a, b, new_word );
		}
		scanf( "%c", &enter );
	}
	
	return 0;
}

void print_ab( char* word, int a, int b ){
	int i;
	for( i = a; i <= b; i++){
		printf( "%c", word[i] );
	}
	printf( "\n" );
}

void reverse_ab( char* word, int a, int b ){
	int range = b - a;
	int i;
	char* work;
	
	work = ( char* )malloc( sizeof( char ) * range );
	
	for( i = 0; i <= range; i++ ){
		work[i] = word[b - i];
	}
	
	for( i = 0; i <= range; i++ ){
		word[i + a] = work[i];
	}
}

void replace_ab( char* word, int a, int b, char* new_word ){
	int range = b - a;
	int i;
	
	for( i = 0; i <= range; i++ ){
		word[a + i] = new_word[i];
	}
}


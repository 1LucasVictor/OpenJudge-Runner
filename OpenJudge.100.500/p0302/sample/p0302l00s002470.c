#include <stdio.h>
#include <string.h>

#define M 1000000
#define L 14

long long getKey( char str[] );
int getChar( char );
int find( char c[] );
int insert( char c[] );
int h1( int );
int h2( int );

char H[M][L];

int main( void ){
	int i, n;
	char str[L], ord[10];
	
	for( i = 0; i < M; i++ ){
		H[i][0] = '\0';
	}
	
	scanf("%d", &n );
	
	for( i = 0; i < n; i++ ){
		scanf("%s %s", ord, str );
		
		if( ord[0] == 'i'){
			insert(str);
		}
		else{
			if( find(str) ){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
	}
	
	return 0;
}

long long getKey( char str[] ){
	long long ret, p;
	int i;
	
	ret = 0;
	p = 1;
	for( i = 0; str[i] != '\0'; i++ ){
		ret += p * getChar(str[i]);
		p *= 5;
	}
	
	return ret;
}

int getChar( char c ){
	if( c == 'A' ){
		return 1;
	}
	else if( c == 'C' ){
		return 2;
	}
	else if( c == 'G' ){
		return 3;
	}
	else if( c == 'T' ){
		return 4;
	}
	else{
		return 0;
	}
}

int find( char c[] ){
	long long key, i, h;
	
	key = getKey(c);
	for( i = 0; ; i++ ){
		h = (h1(key) + i * h2(key)) % M;
		if(strlen(H[h]) == 0){
			return 0;
		} 
		else if(strcmp(H[h], c) == 0){
			return 1;
		}
	}
	
	return 0;
}

int insert( char c[] ){
	long long key, h, i;
	
	key = getKey(c);
	for(i = 0; ; i++) {
		h = (h1(key) + i * h2(key)) % M;
		if(strlen(H[h]) == 0){
			strcpy(H[h], c);
			return 0;
		} 
		else if(strcmp(H[h], c) == 0){
			return 1;
		}
	}
	
	return 0;
}

int h1( int key ){
	return key % M;
}

int h2( int key ){
	return ( key % (M-1))+1;
}

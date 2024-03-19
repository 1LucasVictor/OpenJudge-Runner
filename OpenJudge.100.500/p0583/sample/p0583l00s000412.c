#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 200002
#define max( a, b ) ( a > b? a:b )
#define min( a, b ) ( a < b? a:b )
void show( char *s, int Len ){
		for( int i = 0; i < Len; i++ )printf("%c%c", s[i], " \n"[i == Len-1]);
}

int main(){
		int N, A, B, C, D;scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
		char s[MAX];scanf("%s", s);
		//show( s, N );
		// A < B, if A can reacher, so do B
		// if A can go to D, B can to D too

		//station = ...
		int ptr = min(A, B);
		int end_ptr = max(C, D);
		int station = 0;
		while( ptr < end_ptr ){	
				int counter = 0;
				while( ptr < end_ptr && s[ptr] == '.' ){
						counter++;
						ptr++;	
				}
				ptr++;
				station = max( counter, station );
		}
		//if station == 3
		if( station >= 3 ){
				int start = min(A, B);
				int end = max(C, D)-1;
				for( int i = start; i < end; i++ )
						if( s[i] == '#' && s[i+1] == '#' ){
								puts("No");
								return 0;
						}
		}
		else{
				if( D > C ){
						for( int i = B; i < D; i++ ){
								if( s[i] == '#' && s[i+1] == '#' ){
										puts("No");
										return 0;
								}
						}
				}
				else{// C > D
						if( s[D-1-1] == '#' || s[D-1+1] == '#' ){
								puts("No");
								return 0;
						}
						for( int i = A; i < C; i++ ){
								if( s[i] == '#' && s[i+1] == '#' ){
										puts("No");
										return 0;
								}
						}
				}
		}
		puts("Yes");

}
#include <stdio.h>
#include <string.h>
 
char exchange(char c) {
	if('A' <= c && c <= 'Z') {
		return c + ('a' - 'A');
	}
	if('a' <= c && c <= 'z'){
		return c+('A'-'a');
	}
	else return c;
}
int main(void){
	char  w;
	while(1){
		scanf("%c",&w);
		if(w=='\n') break;
		w=exchange(w);
		printf("%c",w);
	}
	printf("\n");
	return 0;
}

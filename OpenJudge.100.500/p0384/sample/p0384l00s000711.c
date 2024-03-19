#include <stdio.h>
#include <ctype.h>


int main(void) {
	
	char ch[1000];
	int i;
	
	for(i=0;i<1000;i++){
		scanf("%c", &ch[i]);
		if( ch[i] == '\n' ){
			break;
		}
	}
	
	for(i=0;i<1000;i++){
		if ( ch[i] >= 'A' && ch[i] <= 'Z' ){
			printf("%c",ch[i] + 'a' - 'A');
		} else if (ch[i] >= 'a' && ch[i] <= 'z') {
			printf("%c",ch[i] - 'a' + 'A');
		} else {
			printf("%c",ch[i]);
		}
		if( ch[i] == '\n' ){
			break;
		}
	}
	
	return 0;
}
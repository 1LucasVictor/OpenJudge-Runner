#include <stdio.h>
#include <ctype.h>

int main(void){
	char c;
	for (;;){
		scanf("%c", &c);
		if (isupper(c) != 0){
			printf("%c", tolower(c));
		}else{
			printf("%c", toupper(c));
		}
		if (c == '\n'){
			break;
		}
	}
	return 0;
}
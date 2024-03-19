#include <stdio.h>
#include <ctype.h>
int main(void) {
	char c;
	while(scanf("%c",&c)!=EOF && c!='\n'){
		if(islower(c)){
			printf("%c",toupper(c));
		}else if(isupper(c)){
			printf("%c",tolower(c));
		}else{
			printf("%c",c);
		}
	}
	printf("\n");
	return 0;
}
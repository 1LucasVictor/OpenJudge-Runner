#include<stdio.h>
#include<ctype.h>
int main(void){
	char c;
	while(1){
		c=getchar();
		if(c=='\n'){
			printf("\n");
			break;
		}
		else if(isalpha(c)){
			if(isupper(c)) printf("%c",tolower(c));
			else printf("%c",toupper(c));
		}
		else printf("%c",c);
	}
	return 0;
}
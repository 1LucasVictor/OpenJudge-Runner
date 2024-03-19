#include <stdio.h>
#include <ctype.h>

int main(void){
	
	char ch;
	while(1){
		scanf("%c",&ch);
		if(isupper(ch)!=0){
			ch=tolower(ch);
			printf("%c",ch);
		}else if(islower(ch)!=0){
			ch=toupper(ch);
			printf("%c",ch);
		}else{
			printf("%c",ch);
		}
		if(ch=='\n') break;
	}
	return 0;
}
#include <stdio.h>
#include <ctype.h>
int main(void){
	char ch;
	while(1){
		scanf("%c",&ch);
		if(ch=='\n'){
			break;
		}else if(isalpha(ch)==0){
			printf("%c",ch);
		}else if(islower(ch)==0){
			ch = tolower(ch);
			printf("%c",ch);
		}else{
			ch = toupper(ch);
			printf("%c",ch);
		}
	}
	printf("\n");
	return 0;
}
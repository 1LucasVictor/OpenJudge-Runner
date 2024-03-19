#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;
	while(1){
		scanf("%c",&ch);

		if(ch=='\n') break;

		if(!islower(ch)){
			ch = tolower(ch);
		}
		else{
			ch = toupper(ch);
		}
		printf("%c",ch);
	}
	printf("\n");
	return 0;
}
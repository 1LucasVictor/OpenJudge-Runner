#include <stdio.h>
#include <ctype.h>
	int main(void){
		char str;

		while(1){
			scanf("%c",&str);
			if(str=='\n') break;
			if(isupper(str)){
				str=tolower(str);
			}else if(islower(str)){
				str=toupper(str);
			}
			printf("%c",str);
		}
		printf("\n");
		return 0;
}
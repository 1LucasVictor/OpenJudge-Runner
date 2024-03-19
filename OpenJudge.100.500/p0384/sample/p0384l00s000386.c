#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char text;
	while(1){
		scanf("%c",&text);
		if(text=='\n')	break;
		if(isalpha(text)){
			if(islower(text))	printf("%c",toupper(text));
			else if(isupper(text))	printf("%c",tolower(text));
		}else	printf("%c",text);
	}
	printf("\n");
	return 0;
}

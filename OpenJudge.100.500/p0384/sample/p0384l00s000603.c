#include <stdio.h>
#include <ctype.h>

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);

	char str[1200] = {};
	int i;
	for(i = 0;i < 1200;i++){
		scanf("%c",&str[i]);
		if(str[i] == '\n'){
			break;
		}
	}


	for(i = 0;i < 1200;i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
			printf("%c",str[i]);
		}
		else if(isupper(str[i])){
			printf("%c",tolower(str[i]));
		}
		else if(str[i] == '\n'){
			break;
		}
		else{
			printf("%c",str[i]);
		}
	}
	puts("");
	return 0;
}
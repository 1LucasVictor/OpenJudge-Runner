#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char S[3]={'\0'};

	scanf("%c%c%c\n",&S[0],&S[1],&S[2]);
	if(S[0]==S[1]&&S[1]==S[2]){
		printf("No\n");
	}else{
		printf("Yes\n");
	}

	return 0;
}

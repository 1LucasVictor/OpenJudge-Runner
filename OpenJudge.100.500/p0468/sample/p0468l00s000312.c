#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	char str[4]={0};

	scanf("%s", str);
	if(strcmp(str, "ABC")==0){
		printf("ARC\n");
	}
	else{
		printf("ABC\n");
	}
	return 0;
}
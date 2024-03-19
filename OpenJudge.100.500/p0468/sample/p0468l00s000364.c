#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	char s[3]={"\0"};

	scanf("%s",s);
	if(!strcmp(s,"ABC")){
		printf("ARC");
	}else{
		printf("ABC");
	}

	return 0;
}

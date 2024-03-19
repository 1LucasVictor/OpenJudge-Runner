#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	int K,A,B,i;
	char str[1000];
 
	fgets(str, sizeof(str), stdin);
	
	if(strncmp(str,"ABC",3) ==0){
		printf("ARC\n");
	}else{
		printf("ABC\n");
	}
	return 0;
}